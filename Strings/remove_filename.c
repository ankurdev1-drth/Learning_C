#include <stdio.h>
#include <string.h>

void remove_filename(char *url)
{	char *p = url;
	while(*p)
		p++;
	while(p > url && *p != '/')
		p--;
	if (*p == '/')
		*p = '\0';
	
}

int main(){
	char url[] = "http://www.dingo.com/index.html";
	remove_filename(url);
	printf("%s", url);
	return 0;
}
