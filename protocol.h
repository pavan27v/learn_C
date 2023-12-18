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

