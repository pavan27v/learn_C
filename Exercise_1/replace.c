/******************************************************************************

Scan through str searching for the pattern and replacing all the occurrence of 
it with replacement. for example. the call
char array[128] = "this foo  is a foofooo string";
subst(array, "foo", "<->");
would return with "array" modified to
"this <-> is a <-><->o string"


How to implement
compare first charcter from the pattern with main string 
  if it matches :
     check for other characters in the pattern
       if matches 
          replace pattern charcter with replacement(<->)
       if not 
           come out 
           
    if not 
        keep seaching till you find the pattern


*******************************************************************************/
#include <stdio.h>
void subst(char *str, char *pattern , char *replacement)
{
    
    char *local_str = NULL;
    char *local_replace = NULL
    char *local_pattern = NULL;
    int flag = 0;
    local_str  = str;
    local_pattern = pattern;
    
    
    while(*str)
    {
        if(*pattern == *str)
        {
            
            local_replace = replacement;
            local_str = str + 1;
            local_pattern = pattern + 1;
            
            while(*local_pattern)
            {
                if(*local_pattern!= *local_str)
                {
                    flag = 1;
                    break;
                    
                }
               local_pattern++;
               local_str++;
            }
            if(flag == 0)
            {
                // repalce
                while(*local_replace)
                {
                      
                  *str = *local_replace;
                    
                    str++;
                    local_replace++;
                }
                str--;
                
            }
            
            
        }
        
        str++;
       
    }
    
    
    
}

int main()
{
 char array[128] = "this foo  is a foofooo string";
 
 subst(array, "foo", "<->");
 
   printf("%s", array);
 
    return 0;
}


