#include<stdio.h>
#include<string.h>

struct dialing_code {
	char *country;
	int code;
};


const struct dialing_code country_codes[] = {{"india", 91},{"Bangladesh",880},{"France",33},{"Egypt", 20}};



int main()
{
  int x ;

   x = country_codes[1].code;
   printf("code = %d", x);

}
