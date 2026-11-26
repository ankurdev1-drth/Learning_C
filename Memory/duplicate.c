// Uses dynamic storage allocation to create a copy of a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function: 
char* duplicate(char *str){
	char *p;
	//allocating memory
	p = malloc(sizeof(str));
	strncpy(p, str, sizeof(str)-1);
//	if (p = NULL){
//	return NULL;}
//	else 
	return p;
}


int main(void){
	char *string = "Bingo";
	char *new_string;
	new_string = duplicate(string);
	printf("%s", new_string);
	return 0;
}
