/******************************************************************************
 Structures as Arguments and Return Values
 here struct as argument and return value is just cpy of one function with other 
 so it is 
 These operations
impose a fair amount of overhead on a program, especially if the structure is large.
To avoid this overhead, it’s sometimes advisable to pass a pointer to a structure
instead of passing the structure itself.
*******************************************************************************/
#include<string.h>
typedef struct {
        int number;
        //char *name;
        char name[12];
        int on_hand;
} Part;

Part print_part(Part p)
{
    p.number = 10;
    
    strcpy(p.name ,"dkidjwee");
    p.on_hand = 20;
    
    return(p);
    
}

#include <stdio.h>

int main()
{
    
   Part  p;
    
   p = print_part(p);
   
   printf("p.number = %d\n", p.number);
   printf("p.name = %s\n", p.name);
   printf("on_hand = %d\n", p.on_hand);

    return 0;
}

