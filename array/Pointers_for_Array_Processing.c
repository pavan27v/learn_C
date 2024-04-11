/******************************************************************************
Using Pointers for Array Processing


*******************************************************************************/
#include <stdio.h>
#define N 10
int main()
{
   int arr[N] = {1,2,3,4,5,6,7,8,9,10};
   int *ptr;
   
   int sum = 0;
   int i = 0;
   
   /*for( i = 0; i<N; ++i)
   {
       
       sum = sum + arr[i];
   }*/
   
   for(ptr = &arr[0];  ptr<&arr[N] ; ptr++)
   {
       
       //sum = sum + *ptr;
       sum +=  *ptr;
   }
   
   
   
   printf("sum = %d\n", sum);
   
   
   
  
    return 0;
}

