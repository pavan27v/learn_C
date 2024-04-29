#include<stdio.h>
#include<stdint.h>
// bitwise result in  +ve values but logical operators(&& or ||) 0 or 1 

int main()
{
 // test a bit
     uint32_t Testbit = 0x0080;
          uint32_t res = 0x000;
   // check if 8th bit is set
    if(res = (Testbit &  0x0080))
    {
       printf("set\n");
    }
    else{
         printf("not set");
       }
     printf("res = %d" , res);


      uint32_t Testbit1 = 0x0080;
       uint32_t pos = 7;
      if(Testbit &  (1<<pos))
       printf("set\n");
    
    else
         printf("not set");
       
    


}
