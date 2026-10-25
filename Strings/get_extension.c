// function should store the extension on the file name in the string pointed to by extension
#include <stdio.h>
#include <string.h>

//prototype
void get_extension(const char *file_name, char *extension);

//function
void get_extension(const char *file_name, char *extension)
{
   int i = strlen(file_name);
   
	while (i>=0 && file_name[i] !='.')
		i--;
	
	if(i < 0)
		extension[0] = '\0';
	else
		strcpy(extension, file_name + i + 1) ;

   }
