#include<stdio.h>
/*static int sGlobal = 100;
int *ipsGlobal = &sGlobal;

void Question1(void)
{
   static int sLocal = 200;
   int *ipsLocal = &sLocal;
   
   *ipsGlobal = *ipsLocal;
    ipsLocal = ipsGlobal;   
   
     (*ipsLocal)++;
     (*ipsGlobal)++;
  
    printf("The value is %d\n", *ipsLocal);  
 
}*/
static struct{
 
	float f;
	char c[4];
}fc1;

void Question2( )
{
  fc1.f = 123.4;
  fc1.c[0] = 'A';
   fc1.c[2] = 'B';
    fc1.c[3] = 'C';
    printf("value of f = %f , string = %s \n", fc1.f,  &fc1.c[0]);
}
int main()
{
 //   Question1( );
    Question2( );
   

}
