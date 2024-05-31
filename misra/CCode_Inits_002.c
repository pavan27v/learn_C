#include <stdio.h>

// Define the enumeration
/* OK because automatic initialization */
#if 0 
typedef enum
{
    MYCODE_OK_E,
    MYCODE_NOT_OK_E,
    MYCODE_BUSY_E
} MyModule_Enum_ten;

/* OK because all elements are initialized */
typedef enum
{
    MYCODE_OK_E = 3,
    MYCODE_NOT_OK_E = 4,
    MYCODE_BUSY_E = 5
} MyModule_Enum_ten;


/* OK because only first element is  initialized*/
typedef enum
{
    MYCODE_OK_E = 5,
    MYCODE_NOT_OK_E,
    MYCODE_BUSY_E 
} MyModule_Enum_ten;

/* NOT OK because second  first element is initialized */
typedef enum
{
    MYCODE_OK_E,
    MYCODE_NOT_OK_E = 2,
    MYCODE_BUSY_E 
} MyModule_Enum_ten;

/* OK because all elements are initialized */
typedef enum
{
    MYCODE_OK_E = -1,
    MYCODE_NOT_OK_E = -2,
    MYCODE_BUSY_E = -3
} MyModule_Enum_ten; 

#endif 
/* OK because first  elements is  initialized */
typedef enum
{
    MYCODE_OK_E = -1,
    MYCODE_NOT_OK_E,
    MYCODE_BUSY_E 
} MyModule_Enum_ten;


int main()
{
    // Declare a variable of type MyModule_Enum_ten
    MyModule_Enum_ten status;

    // Assign values to the variable
    status = MYCODE_OK_E;

    // Switch statement to handle different statuses
    switch (status)
    {
    case MYCODE_OK_E:
        printf("Status: OK\n");
        break;
    case MYCODE_NOT_OK_E:
        printf("Status: Not OK\n");
        break;
    case MYCODE_BUSY_E:
        printf("Status: Busy\n");
        break;
    default:
        printf("Unknown status\n");
        break;
    }

    return 0;
}

