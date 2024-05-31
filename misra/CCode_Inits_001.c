#include<stdio.h>
typedef unsigned int  uint32 ;
static uint32 staticvar1_u32 = 10L; /* Explicitly initialized variable */
static uint32 staticvar2_u32; /* Variable will be initialized with 0 */



// Declare a variable to be placed in a specific memory section
uint32 localvar3_u32  __attribute__((section(".my_mem_section")));/* mapping concept has to be used*/



int main() {
   
    uint32 localvar1_u32; /* This variable has to be initialized */
    uint32 localvar2_u32; /* For function local variable no memory */
    
      //section Attribute cannot be specified for local variable
    //uint32 localvar3_u32 __attribute__((section(".my_mem_section"))); __attribute__((section(".my_mem_section")));/* mapping concept has to be used*/
    
     localvar2_u32 = localvar1_u32;  /* Not OK: Uninitialized variable is used */
     //ExtModule_Func(localvar1_u32); /* Not OK: External function called with */
   
     localvar1_u32 = 0x12345L; /* Now myvar1_u32 is initialized */
    // ExtModule_Func(localvar1_u32); /* OK, local variable is initialized before */
   
     localvar3_u32 = staticvar1_u32; /* OK, staticvar1_u32 is initialized with 10 */
     localvar3_u32 = staticvar2_u32; /* OK, staticvar2_u32 is at least set to 0 */
   
   
   
    localvar3_u32 = 42; // Assign a value to myVariable
    printf("Value of myVariable: %d\n", localvar3_u32); // Print the value of myVariable
    return 0;
}

