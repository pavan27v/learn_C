
/******************************************************************************
what is wrong with this code
Implementing Function Tables: Function pointers can be used to create arrays or tables of functions, 
enabling efficient lookup and execution of functions based on indexes or keys.

  Function_Tables.c

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>


int add(int a, int b)
{
    
    return(a+b);
}
int sub(int a, int b)
{
    
    return(a-b);
}
int mul(int a, int b)
{
    
    return(a*b);
}
int diV(int a, int b)
{
    
    return(a/b);
}
int main()
{
    // function pointer to enable reference
    
    int (*fun_ptr[])(int , int) = { add, sub, mul, diV };
    int num1, num2, result;
    int choice;
    printf("Enter your choice:\n 0)add\n1)sub\n2)mul\n3diV\n");
    scanf("%d",&choice);
     if(choice < 0 || choice > 3)
     {
	    printf("INVALID Choice\n");	
	     exit(0);	
     }    
   
    printf("Enter two values to perform your choice of operation\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    result = (*fun_ptr[choice ])(num1 , num2);

    printf("result = %d", result);

    return 0;
}
