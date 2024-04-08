/******************************************************************************

//pointer as return value for external variable 

Returning a pointer to a local variable is generally not recommended because local variables
are stored on the stack and their memory is deallocated once the function in which they are defined exits. 
Therefore, returning a pointer to such a variable would result in a dangling pointer,
pointing to memory that is no longer valid. Accessing data through such a pointer can lead to undefined behavior, 
as the memory may be overwritten by subsequent function calls.

 warning: function returns address of local variable [-Wreturn-local-addr]
 ptr = get_static_variable_pointer(&global_data);
    printf("var = %d\n", *ptr);


//using a local static variable within a function ensures that the variable persists between function calls. 
Static variables are stored in a special static data section of memory, separate from the stack, 
and their values are preserved throughout the execution of the program. 
This makes it safe to return a pointer to a local static variable from a function, 
as the variable's memory remains valid even after the function exits.

*******************************************************************************/
#include <stdio.h>
int  global_data  = 10;

int *get_external_variable_pointer(int *ptr){
    
    
    *ptr = *ptr + 12;
    return(ptr);
    
}
int *get_static_variable_pointer(int *ptr){
    
    int static var = 0;
    var = *ptr + 20;
    return(&var);
    
}
/*int *get_local_variable_pointer(int *ptr){
    
    int  var = 0;
    var = *ptr + 20;
    return(&var);
    
}*/

int main()
{
    
    // return external variable 
    int *ptr  = get_external_variable_pointer(&global_data);
    printf("global_data = %d\n", global_data);
    
    
    // return local static variable 
    ptr = get_static_variable_pointer(&global_data);
    printf("var = %d\n", *ptr);
    
    
    // try return local variable 
     //ptr = get_local_variable_pointer(&global_data);
    //printf("var = %d\n", *ptr);    

    return 0;
}

