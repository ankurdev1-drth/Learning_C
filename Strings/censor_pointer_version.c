//same concept but using arrays of pointers
#include <stdio.h>

void censor(char *s){
	for(; *s; s++){
		if (s[0] == 'f' && s[1] == 'o' && s[2] == 'o')
            s[0] = s[1] = s[2] = 'x';
	}
}

int main(){
	char str[100];
	char *p = str;
	
	printf("Enter the string: ");
	fgets(p, sizeof(str), stdin);
	censor(p);
	printf("%s", p);
	return 0;
}
