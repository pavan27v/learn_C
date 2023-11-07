#include<stdio.h>
void interactive_mode()
{
  printf("in Mode");
}
void file_mode(filename)
char *filename;
{
  printf("file_mode");

}
void command_mode(argc, argv)
int argc;
char *argv[];
{
   printf("CMD");

}

int main(argc, argv)
int argc;
char *argv[];
{
  if(argc == 1)
	  interactive_mode();
  else
	 if( argc==3 && argv[1][0]=='-' && argv[1][1]=='f')
          file_mode(argv[2]);
         else
	
		command_mode(argc, argv);
	 
}
	
