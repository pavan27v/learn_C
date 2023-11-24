/************************************************************************************
 
Example to understand function pointers:

Dynamic Function Invocation: Function pointers 
allow you to select and invoke functions dynamically during runtime. 
This is useful when you want to switch between different functions based on conditions or inputs.
 
 function pointer helps in  calling  function based on the choice during run time. 
 
************************************************************************************/
#include<stdio.h>
//prototype
int add(int , int);
int sub(int , int);
int mul(int , int);
int diV(int , int);



int add(int a, int b)
{
    
    return (a+b);
    
}
int sub(int a, int b)
{
    
    return (a-b);
    
}

int mul(int a , int b)
{
    
    return (a*b);
}
int diV(int a , int b)
{
    
    return (a/b);
}




int main(){
    
   int choice;
   int num1, num2;
   int result;
   printf("math operation on two numbers\n");
   printf("enter the two numbers : first num > second num\n");
   scanf("%d",&num1);
   scanf("%d",&num2);
   
   // function pointer declearation
   int (*fun_ptr)(int , int);
   
   printf("enter your choice for math operation:\n1)add\n2)sub\n3)mul\n4)diV\n");
   scanf("%d",&choice);
   
  switch(choice)
  {
      
      case 1: 
             fun_ptr = &add;
             break;
      case 2: 
             fun_ptr = &sub;
             break;
      case 3: 
             fun_ptr = &mul; 
             break;
       case 4: 
             fun_ptr = &diV; 
             break;
        default: 
              printf("invalid Choice\n");
  }
     //call the fucnction;
     
        result = (*fun_ptr)(num1, num2);
        
         // we can use like this also
         
         //result = fun_ptr (num1, num2);
         
        
        printf("result = %d",result);
   

    
}
