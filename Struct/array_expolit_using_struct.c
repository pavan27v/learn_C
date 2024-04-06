/******************************************************************************
arrays can’t be copied using the = operator but stuct we can if its compatible
when you consider that an array embedded within a structure is copied when the enclosing structure
is copied.
programmers exploit this property by creating “dummy”
structures to enclose arrays that will be copied later:


*******************************************************************************/
#include <stdio.h>
// dummy struct inside having array
int arr[100], arr2[100];

 //arr1 = arr2   // invalid // error: initializer element is not computable at load time

struct{
    
    int arr[100];
    
}PART1, PART2;
          
//copy one    
          



int main()
{
    PART1.arr[10] = 100;
    printf("PART1.arr[10] = %d\n", PART1.arr[10]);
    
    
    // we indirectly copy the array
    
    PART2 = PART1;
     printf("PART2.arr[10] = %d", PART2.arr[10]);
    
    
    return 0;
}

