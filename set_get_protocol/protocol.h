#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef enum opcode {
    GET = 0,
    SET = 1,
    UNDEFINED = -1
} opcode;

typedef enum type {
    INT = 0,
    CHAR = 1,
    INVALID = -1
} type;

typedef struct message_fields {
    opcode opc;
    type typ;
    uint8_t len;
    uint8_t val;
} msg_fields;

typedef struct message_format {
    uint8_t SOF;
    opcode opc;
    type typ;
    uint8_t len;
    uint8_t val;
    uint16_t chksum;
} msg_fmt;

void set_opcode(uint8_t opc);
void set_type(uint8_t typ);
void set_length(uint8_t len);
void set_value(uint8_t val);
void set_chksum(uint16_t chksum);

void crcInit(void);
uint16_t crcCompute(unsigned char *message, unsigned int nBytes);

uint8_t create_msg();
uint8_t frame_packet(struct message_fields *msg_fields);

#endif /* PROTOCOL_H */



msg_fmt *msg = NULL;

// CRC parameters
#define POLYNOMIAL 0x1021
#define INITIAL_REMAINDER 0xFFFF
#define FINAL_XOR_VALUE 0x0000
typedef unsigned short width;
#define WIDTH (8 * sizeof(width))
#define TOPBIT (1 << (WIDTH - 1))
width crcTable[256];

void crcInit(void) {
    width remainder;
    width dividend;
    int bit;

    for (dividend = 0; dividend < 256; dividend++) {
        remainder = dividend << (WIDTH - 8);

        for (bit = 0; bit < 8; bit++) {
            if (remainder & TOPBIT) {
                remainder = (remainder << 1) ^ POLYNOMIAL;
            } else {
                remainder = remainder << 1;
            }
        }
        crcTable[dividend] = remainder;
    }
}

uint16_t crcCompute(unsigned char *message, unsigned int nBytes) {
    
    printf("nbytes = %d\n", nBytes);
    
    printf("message = %p\n",message);
    
    
    unsigned int offset;
    unsigned char byte;
    width remainder = INITIAL_REMAINDER;

    for (offset = 0; offset < nBytes; offset++) {
        printf("offset = %d",offset);
        byte = (remainder >> (WIDTH - 8)) ^ message[offset];
        
         printf("message[%d] = %d\n", offset,message[offset]);
          
        printf("byte = %d\n", byte);
        remainder = crcTable[byte] ^ (remainder << 8);
        printf("remainder = %hu\n", remainder);
    }
    
   

    
    
   printf("remainder ^ FINAL_XOR_VALUE = %hu", remainder ^ FINAL_XOR_VALUE);
    return (remainder ^ FINAL_XOR_VALUE);
    
    
    
}

void set_opcode(uint8_t opc) {
    if (msg != NULL) {
        msg->opc = opc;
    }
}

void set_type(uint8_t typ) {
    if (msg != NULL) {
        msg->typ = typ;
    }
}

void set_length(uint8_t len) {
    if (msg != NULL) { 
        msg->len = len;
    }
}

void set_value(uint8_t val) {
    if (msg != NULL) {
        msg->val = val;
    }
}

void set_chksum(uint16_t chksum) {
    if (msg != NULL) {
        msg->chksum = chksum;
    }
    //printf("%x",chksum);
}

uint16_t calculate_chksum() {
    
    
    //return crcCompute((unsigned char *)msg, sizeof(msg_fmt) - sizeof(msg->chksum));
   
    uint16_t sum = 0;
    uint8_t *ptr = (uint8_t *)msg;
 
    printf("uint16_t = %zu\n", sizeof(uint16_t));
    printf("dif = %zu\n",sizeof(msg_fmt) - sizeof(msg->chksum));
    
    
    for (size_t i = 0; i < sizeof(msg_fmt) - sizeof(msg->chksum); ++i) {
        printf("i = %d\n", ptr[i]);
        sum += ptr[i];
        
    }
    
    return ~sum;
   
   
}
uint8_t create_msg() {
    if (NULL == msg) {
        msg = (msg_fmt *)malloc(sizeof(msg_fmt));
        return (1);
    } else {
        return (0);
    }
}

uint8_t frame_packet(struct message_fields *msg_fields) {
    uint16_t sum;

    if (NULL == msg_fields) {
        return -1;
    } else {
        if (create_msg()) {
            set_opcode(msg_fields->opc);
            set_type(msg_fields->typ);
        }
        set_length(msg_fields->len);
        set_value(msg_fields->val);

        sum = calculate_chksum();
        set_chksum(sum);
    }

    return 0;
}















