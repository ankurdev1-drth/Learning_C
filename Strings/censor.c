// modifies a stringg by replacing every occurrence of foo by xxx
// example: food -> xxxd
#include <stdio.h>
#include <ctype.h>

/*int censor(void){
	int ch;
	while((ch = getchar()) !=EOF){  /here we will loop because we want to read the whole text as in getchar() each call returns exactly `one` character 
		if(ch == 'f' || ch == 'o')
			ch == 'x';
			putchar(ch);
		}
	
	return 0;
}*/ //wrong approach

//new approach : 
// remember we need to replace foo by xxx not f, o, o by x
void censor(char str[]){  // why use void?? because we are MODIFIYING the string that is it we don't want the function to return anything
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == 'f' && str[i+1] == 'o'&& str[i+2] =='o')
			str[i] = str[i+1] = str[i+2] = 'x';
			}
}

int main(){
	char string[100];
	printf("Enter the string: ");
	fgets(string, sizeof(string), stdin);	
	censor(string);
	printf("%s", string);
	return 0;
}
