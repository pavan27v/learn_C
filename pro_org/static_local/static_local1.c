/******************************************************************************

local static variable
1) it holds the properties of the local variable : having block scope (cant be accessed in other function)
2) by default local variable will have garbage(junk Value) but local static is zero
3) local variable memory is create in stack during runtime vs local static in data segment (during compile time)
4)static local variable will retains its values between function calls
*******************************************************************************/
#include <stdio.h>
int f(void)
{
  static int i = 0; /* static local variable */
  ++i;
  if(i == 4)
  {
      return -1;
  }
}

void f2(void)
{
    
    // try to access the static variable i in the fun f2
    
     
    // int j = i;
     
     // error : 'i' undeclared 
  //  because static variable i is block scope cant be accessed in other function

}

int main()
{
    int  i = 0;
      i = f();
      i = f();
      i = f();
      i = f();
      printf("i = %d",i);

    return 0;
}








