#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define DEF_CHKSUM  0xFFFF


typedef enum opcode {
    GET = 0,
    SET = 1,
    UNDEFINED = -1
} opcode;

typedef enum type {
    INT  = 0,
    CHAR = 1,
    STR  = 2,
    INVALID = -1
} type;

typedef struct message_fields {
    opcode opc;
    type typ;
    uint8_t len;
    uint8_t *val;    
} msg_fields;

typedef struct message_format {
    uint8_t SOF;
    opcode opc;
    type typ;
    uint8_t len;
    uint8_t *val;
    uint16_t chksum;
} msg_fmt;

msg_fmt *msg = NULL;
 
/* setters prototypes */
void set_opcode(uint8_t);
void set_type(uint8_t);
void set_length(uint8_t);
void set_value(uint8_t *);
void set_chksum(uint16_t);

/* getters prototypes */
uint8_t get_opcode(void);
uint8_t get_type(void);
uint8_t get_length(void);
uint8_t *get_value(void);
uint16_t get_chksum(void);

/* Helper functions */
uint8_t create_msg();
uint8_t calculate_chksum();

/* APIs */
uint8_t frame_packet(struct message_fields*);
uint8_t parse_packet(); 

void set_type(uint8_t typ)
{
    if(msg!=NULL){
    msg->typ = typ;
    }
}
void set_opcode(uint8_t opc)
{
    if(msg!=NULL){
    msg->opc = opc;
    }

}
void set_length(uint8_t len)
{
    if(msg!=NULL){
    msg->len = len;
    }
    
}

void set_value(uint8_t *val)
{
   if (msg != NULL && val != NULL) {
        msg->val = val;
    }
}

void set_chksum(uint16_t chksum)
{
    if(msg!=NULL){
    msg->chksum = chksum;
    
    }
    
}

uint8_t calculate_chksum() {
    uint16_t sum = 0;
    int count = 0;
    uint8_t *ptr = (uint8_t *)msg;

    // Calculate checksum excluding the chksum field
    for (size_t i = 0; i < sizeof(msg_fmt) - sizeof(msg->chksum); ++i){
            count++;
           sum += ptr[i];
        
    }

    printf("count = %d",count);
    // One's complement of the sum as the checksum
    return ~sum;
}

uint8_t create_msg() {
    if(NULL == msg) {
        msg = (msg_fmt *)malloc(sizeof(msg_fmt));   
        return (1);
    } else {
        // msg already created - singleton pattern
        return (0);
    }
}

uint8_t frame_packet( struct message_fields *msg_fields) {
    uint16_t sum;
    
    if(NULL == msg_fields) {
        return -1;
    } 
      else {
        if(create_msg()) {
             set_opcode(msg_fields->opc);
             set_type(msg_fields->typ);
        }
            set_length(msg_fields->len);
            set_value(msg_fields->val);
            
            if(sum = calculate_chksum()) {
                set_chksum(sum);
            } else {
                set_chksum(DEF_CHKSUM);
            }
        }  
}


// Temporarily silence the linker. The protocol files are supposed to get integrated with app file
int main(void) {

   
   // data from transmiter end 
   
     msg_fields sample_msg = {SET, STR, 5, "Data"}; 
     frame_packet(&sample_msg);
     
     // storing the 
    // msg->chksum = 0x192;
     printf("msg->chksum = %x",msg->chksum);
     
  
    return 0;

}








