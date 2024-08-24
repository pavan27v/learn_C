#include<string.h>
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
/*static struct{
 
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
}*/
struct{
  int *ip;
  char *cp;
  float *fp;

}s1;
struct{
   void *v1;
   void *v2;
   void *v3;
 
}s2;
struct{
  int i;
  char c;
  float f;

}s3;

void Question3( )
{
   s3.i = 100;
   s3.c = 'a';
   s3.f = 200.0;


   s2.v1 = (void *)&s3.i;
   s2.v2 = (void *)&s3.c;
   s2.v3 = (void *)&s3.f;

   memcpy(&s1, &s2, sizeof(s2));

   s3.i = ( *s1.ip ) + (* ( (int *)s2.v1)) + 1;
   s3.c = (* ((char *)s2.v2)) + 1;
   s3.f = (*s1.fp) + (* ((float *)s2.v3)) + 1;
   printf(" The values are i = %d , f = %f , c = %c\n", *s1.ip ,*s1.fp , *s1.cp);
}

int main()
{
 //   Question1( );
    //Question2( );
     Question3( );


}
