#include<stdio.h>
#include<stdint.h>
int main()
{
	// to set 4th bit
	/* uint32_t set_bit = 0x0000;
	set_bit|=0x0010;
	printf("set_bit = %d\n", set_bit); */


	// to set 4th bit 
	uint32_t set_bit1 = 0x0000;
        uint8_t position = 3;
	set_bit1|=(1<<position);
	        printf("set_bit = %d\n", set_bit1);

}
