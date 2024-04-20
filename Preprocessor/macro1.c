/******************************************************************************


macro values should used with parentheses ((PI_VALUE) * (r) * (r))


#define AREA_OF_CIRCLE(r)  PI_VALUE * r * r

#define AREA_OF_CIRCLE(r)  ((PI_VALUE) * (r) * (r))

parentheses for every operands.... and final one parentheses()

#if 0   ===> used to block the code
#endif   


#if 0

#else      ====> used to compile one part and exclude other part of the code

#endif


#ifdef <identifier>
#endif

eg:-  #ifdef NEW_FEATURE
       ........
       ........
       ........
      #endif
      


the macro NEW_FEATURE should be defines to enable the code 
#define NEW_FEATURE can be defined inside the code or 

if we cant able to edit the source code file to include #define NEW_FEATURE

we can send the macro name as compiler argument
properties--> setting-->GCC compiler --> preprocessor--> defined symbols(-D)
Add symbol pr macro name  NEW_FEATURE


or #define NEW_FEATURE in code 


to undfine the macro or symbol used in code
#undef NEW_FEATURE





*******************************************************************************/
#include<stdio.h>
#if 0
#define PI_VALUE  3.1415f
#define AREA_OF_CIRCLE(r)  PI_VALUE * r * r
int main()
{
    float  radius = 20;
       int area = AREA_OF_CIRCLE(radius+1);
    
    printf("area = %d",area);
//ssssssssssssssss
    return 0;
}

#else


#define PI_VALUE  3.1415f
#define AREA_OF_CIRCLE(r)  ((PI_VALUE) * (r) * (r))
int main()
{
    float  radius = 20;
       int area = AREA_OF_CIRCLE(radius+1);
    
    printf("area = %d",area);

    return 0;
}


#endif
