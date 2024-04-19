#include<stdio.h>
#include<stdint.h>
int main()
{
	// clear 4th bit 
     uint32_t clear_bit = 0x000b;
      clear_bit &= ~(0x0008);

      printf("clear_bit = %x\n",clear_bit); // output : should be 3



      // clear 5th bit 
      uint32_t clear_bit1  = 0x002f;
      uint8_t pos = 5;
     clear_bit1 &= ~(1<<pos);
     printf("clear_bit1 = %x\n", clear_bit1); // output : should be f

 
      // clear 4th bit and 
     uint32_t clear_bit2 = 0x000b;
      clear_bit2 &= ~(0x0009);

      printf("clear_bit2 = %x\n",clear_bit2); // output : should be 2


}
