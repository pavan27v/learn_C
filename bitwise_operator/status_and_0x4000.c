/******************************************************************************

The precedence of &, ^, and | is lower than the precedence of the relational and
equality operators. Consequently, statements like the following one won’t have the

desired effect:
if (status & 0x4000 != 0)

Instead of testing whether status & 0x4000 isn’t zero, this statement will
evaluate 0x4000 != 0 (which has the value 1), then test whether the value of
status & 1 isn’t zero.
*******************************************************************************/
/*#include<stdio.h>
int main()
{
    int long status = 0x4000;
   if (status & 0x4000 != 0)
       printf("if\n");
   else
      printf("else\n");
    return 0;
}*/

#include<stdio.h>
int main()
{
    int long status = 0x4000;
   if ((status & 0x4000) != 0)
       printf("if\n");
   else
      printf("else\n");
    return 0;
}
