// domain points to a string containing an internet domain
#include <stdio.h>
#include <string.h>
// definition
void build_index_url(const char *domain, char *index_url){
	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
	}
int main(){
	char url[100];
	build_index_url("dingo.com", url);
	printf("%s\n", url);
	return 0;
}
