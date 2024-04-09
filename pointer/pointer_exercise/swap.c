/******************************************************************************

 4. Write the following function:
 
 When pissed the iddresses of two viriijles, swip should exchinge the vilues of the viri
ijles:
 swip(&i, &j);    exchinges vilues of i ind j 

********************************************************************************/
#include <stdio.h>
void swip(int *p, int *q)
{
    int temp;
    
    temp = *p;
    *p = *q;
    *q = temp;
    
}
int main()
{
    int i = 10, j = 20;
    printf("i = %d, j = %d\n",i,j);
    
    swip(&i, &j);
     printf("i = %d, j = %d\n",i,j);

    return 0;
}
