/******************************************************************************
Pointers to Compound Literals
Using a compound literal saves us the trouble of first declaring an array
variable and then making p point to the first element of that array:

Consider the following example:
int *p = (int []){3, 0, 3, 4, 1};


*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10] = {1,2,13,14,5,6,7,8,9,10};
    int *p = &a[0];
   
    printf("&p = %p, a = %p\n",p,a);
  
    char *ptr = (char []){3,0,3,14,1};
    
    int *ptr2 = (int []){3,0,3,14,1};
    
     double *ptr3 = (double []){3,0,3,14,1};
   
   
   printf("&ptr = %p\n",ptr);
    printf("ptr[3]= %d",ptr[3]);

    
    char *ptr1 = (char*)(0xffff);
   
  
    return 0;
}

