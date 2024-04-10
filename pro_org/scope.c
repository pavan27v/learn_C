/******************************************************************************

scope
When a declaration inside a block
names an identifier that’s already visible (because it has file scope or because it’s declared in an enclosing block)

the new declaration temporarily “hides” the old
one, and the identifier takes on a new meaning. At the end of the block, the identifier
regains its old meaning


Consider the (somewhat extreme) example at the top of the next page, in
which the identifier i has four different meanings:


*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

// global variable 
int i = 12; // delaration 1 

// create function with parameter i 
void f(int i) // delaration 2
{
    
    i = i + 1; 
    // here i refer to parameter not i in delaration 1 
    
    // verify i should be 21
    printf(" i in delaration refer to parameter = %d\n", i);
}

void g(void)
{
   // int i = -1; // delaration 3
    
   // int i = 2; // delaration 3
    if(i>0)
    {
     //   int i = 1; // delaration 4
        
        i =  i + 3;  // here i refer to delcaration 4 and hides delaration 3 and 1
        
        printf(" i = %d", i);
        
        exit(0);
        
    }
    
    i = 2;  // refer to  delaration 3 and hides delaration 1
    printf(" i = %d", i);
}


void h(void)
{
    
    i = i + 5; // refer to the delaration 1 
    
    // verify i should be 17
    printf("i from global scope i = %d\n", i);
    
}

int main()
{
 
 
 
 
 
     h(); // check i inside i refring to globalvariable in declaraton 1
     
     f(20);  // check i inside i refring to parameter in declaraton 2
      g();

    return 0;
}

