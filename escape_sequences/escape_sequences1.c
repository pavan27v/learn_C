/******************************************************************************

Escape sequences
\'  single Quote
\"  double Quote
\\  backslash
\0  NULL
\a  bell
\b  backspace
\f form feed
\n new line
\r carry return
\t horizontal tab
\v vertical tab



David says , " Programming is fun !" 
**Conditions apply , "Offers valid until tomorrow"
C:\My computer\My folder
D:/My documents/My file
\ \ \ \ Today is holiday \ \ \ \
This is a triple quoted string """ This month has 30 days """



*******************************************************************************/
#include <stdio.h>
int main()
{
    
    // multiple printf 
    
    printf("David says , \" Programing is fun !\".\n");
    printf("**Conditions apply , \"offers valid until tomorrow\"\n");
    printf("C:/My computr/My folder\n");
    printf("D:/My documents/My file\n");
    printf("\\ \\ \\ \\ Today is holiday \\ \\ \\ \\\n");
    printf("This is a triple quoted string \"\"\" This month has 30 days \"\"\" \n");
    
    
    
     printf("**********************************************************************\n");
    
    
    // sigle printf
    printf("David says , \" Programing is fun !\".\n**Conditions apply , \"offers valid until tomorrow\"\nC:/My computr/My folder\nD:/My documents/My file\n\\ \\ \\ \\ Today is holiday \\ \\ \\ \\\nThis is a triple quoted string \"\"\" This month has 30 days \"\"\" \n");
    
    
    
    
    
    
    
   

    return 0;
}

