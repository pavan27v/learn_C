#include<stdio.h>
int main()
{
	int  a = 10;
	int  b = 30;

	float c = 1.3;
	float d = 4.3;

	char e = 'a';
	char f = 'b';

        printf("Sum of a(int) and b(int) is %d\n", a + b);
        printf("Sum of a(int) and b(int) is %d\n", a + 10);
        printf("Sum of a(int) and b(int) is %d\n", 20 + 10);

        printf("Sum of c(float) and d(float) is %f\n", c + d);
        printf("Sum of c(float) and 2.1(float) is %f\n", c + 2.1);
        printf("Sum of 2.1(float) and 3.4(float) is %f\n", 2.1 + 3.4);

		printf("Sum of e(char) and f(char) is %d\n", e + f);
		printf("Sum of e(char) and 'z'(char) is %d\n", e + 'z');
		printf("Sum of 'c'(char) and 'e'(char) is %d\n", 'c' + 'e');


		//when we mix type say for  example  char and int ==> data type upgradation
		//char<int<float<double

       printf("Sum of e(char) and 10 is %d\n", e + 10);
	  printf("Sum of c(float) and 10 is %f\n", c + 10);
	  	  printf("Sum of c(float) and 10 is %f\n", 10.2 + 10);
		  	  	  printf("Sum of c(float) and 10 is %f\n", 10.2f + 10);





       













}
