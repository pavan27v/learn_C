/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// create direct  instence of structure 
// using initilzer list
/* part1 ==> all the member are initlized with .name_of_th_members no confusion 
   part2 ==> order in which it is initlized is important changing order leads compatability issue 
   part3 ==> oder can also be changed using .name_of_th_members
   part4 ==> if any of the members not initalized it will take zreo like partial initilization of arrays
   part5  ==> instance is created whose members can be acccessed and updated in main*/
   

struct{
    
    int part_number;
    char part_name[100];
    int number_of_parts;
    
}part1 ={.part_number = 12, .part_name = "fjffi", .number_of_parts = 23},part2 = {13,"weff",24}, 
 part3 ={.number_of_parts = 23, .part_name = "okdk", .part_number = 234},
 part4 ={.number_of_parts = 23,  .part_number = 234}, part5; 
          
          
          

// various ways to intialize the members of the structure 

int main()
{
    
  //  part3 = {14, "kiijfi", 25};
   part5.part_number = 100;
   // part3  = {.part_number = 12, .part_name = "fjffi", .number_of_parts = 23}
    
    
   // printf("number_of_parts = %d\n", number_of_parts);
    printf("part1.part_number = %d\n", part1.part_number);
    printf("part1.part_name = %s\n", part1.part_name);
    printf("part1.number_of_parts = %d\n", part1.number_of_parts);
    printf("part4.part_name = %d\n",part4.part_number);
    
    

    return 0;
}

