/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


//   part5  ==> instance is created whose members can be acccessed and updated in main*/
   

struct{
    
    int part_number;
    char part_name[100];
    int number_of_parts;
    
} part5, part6; 

struct{   
    int part_number;
    char part_name[100];
    int number_of_parts;
    
} part7;
          
          
          

// various operations on members of the tstructure 

int main()
{
    
    part5.part_number = 10;  // member of the struct are lvalues 
    part5.number_of_parts++;
    
    // how to read the values to the members of the struct 
    printf("read part name for part5");
    scanf("%s", part5.part_name); // here & is not required 
    scanf("%d", &part5.number_of_parts); //here . operator is having more precendce than &
    
    
    

   // printf("number_of_parts = %d\n", number_of_parts);
    printf("part5.part_number = %d\n", part5.part_number);
    printf("part5.part_name = %s\n", part5.part_name);
    printf("part5.number_of_parts = %d\n", part5.number_of_parts);
    
    printf("............................................................\n");
    
    
    // copy of one struct to other : copy one struct to other is possible if structure are compatible 
    part6 = part5;
    
    
     printf("part6.part_number = %d\n", part6.part_number); 
    printf("part6.part_name = %s\n", part6.part_name);
    printf("part6.number_of_parts = %d\n", part6.number_of_parts);
    
    
    printf("..........check copy of incompatible  compatible...............\n");
    
 
     // part7 = part6; // we cant do 
   
   
    printf("part7.part_number = %d\n", part7.part_number); // its not intialized it will take 0 by default 
    
    return 0;
}
          
          
         
