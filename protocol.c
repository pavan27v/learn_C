// Temporarily silence the linker. The protocol files are supposed to get integrated with app file
int main(void) {   
   // data from transmiter end 
     msg_fields sample_msg = {SET, STR, 5, "Data"}; 
     frame_packet(&sample_msg);
     // storing the 
    // msg->chksum = 0x192;
     //printf("msg->chksum = %x",msg->chksum);
    return 0;
}
