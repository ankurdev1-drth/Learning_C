#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

//prototype
bool test_extension(const char *file_name, const char* extension);

//definition
bool test_extension(const char *file_name, const char* extension){
	const char *p = file_name;
	while(*p)
		p++;
	while(p>file_name && *p != '.')  //scanning backwards to find last '.'
		p--;
	
	if (*p != '.')
		return false;
	
	p++;
	
	while (*p && *extension) {
		if(toupper((unsigned char) *p) != toupper((unsigned char) *extension))
			return false;
		p++;
		extension++;
	}
	
	return *p == '\0' && *extension == '\0';

	
	
		}
