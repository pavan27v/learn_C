/******************************************************************************
 Write the following function:
 void find_two_largest(int a[], int n, int *largest,
                      int *second_largest)

********************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void  find_two_largest(int a[], int n, int *largest,
                      int *second_largest){
                          
   int i = 0;
    *largest = *second_largest = a[0];
   for(i = 1; i<n; ++i)
   {
       
       if(a[i] > *largest){
           
           *second_largest = *largest;
           *largest = a[i];
       }
       
       
   }
                          
}
int main() {
    int a[]={12,123,45,568,34,5678};
    int n = 6;
    int largest;
    int second_largest;
    find_two_largest(a, n, &largest,&second_largest); 
    
    
    printf("largest = %d,second_largest = %d\n",largest,second_largest);
            
                    
            
    return 0;
}












