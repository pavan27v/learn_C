/******************************************************************************
#defined operator
The defined operator is used when you want to check defintion of multiple macros using 
single #if #ifdef or #ifndef directive.

you can also use 'C' logical operator such as AND NOT OR with 'defined' operator.

eg : #if defined(A) && defined(B)
     #endif
     
make sure that compilation fail if none of the macros are defined
make sure that cmpilation triggers warining if none of macros are defined.




eg : #if !defined(A) && !defined(B)
     #error "mo macro def"
    
     
*******************************************************************************/
#include <stdio.h>

#define A 
//#define B
int main()
{
    #if !defined(A) || !defined(B)
    // #error "no macro def"
     
     printf("error");
    #endif 
    
    return 0;
}

