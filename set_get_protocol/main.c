#include <stdio.h>
#include <stdlib.h>
#include "protocol.h"

int main(void) {
    // Initialize CRC lookup table
    crcInit();

    uint16_t check_sum = 0;
    // Simulated sensor value (replace with actual sensor reading)
    uint8_t sensorValue = 1;

    // Create a message packet using the GET-SET protocol with the INT type
      msg_fields sensor_msg = {SET, INT, sizeof(uint8_t), sensorValue};
     frame_packet(&sensor_msg);

    // For testing purposes, printing the checksum
    printf("msg->chksum = %x\n", msg->chksum);

    // Free allocated memory when done
    //free(msg->val);

    
    //once data send to reciever end the calcualte the check sum again and campare with the check sum field of the packet 
    
   // crcInit();
   
    // For testing purposes, printing the checksum
    
     printf("After calculation chksum @ reciever end = %x\n",  calculate_chksum());
     
   
    if(msg->chksum == calculate_chksum())
    {
        
        printf("Check sum Valid\n");
        
    }
    else
    {
        
       printf("Check sum INvalid\n"); 
        
    }
    
    
    printf("check sum = %x\n",check_sum);
    
    
    free(msg);

    return 0;
}

