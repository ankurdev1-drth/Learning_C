//reads a message entered by the user and translates it into BIFF-speak:
/*	Enter message: Hey dud, C is rilly cool
	In BIFF-speak: H3Y DUD3, C 15 RILLY C00L!!!!!!!!
 */
#include <stdio.h>
#include <ctype.h>

#define MAX 1000

int main(void){
	char msg[MAX];
	int ch, n = 0, i;
	printf("Enter message: ");

	//storing them in array
	while(n< MAX && ((ch = getchar()) != '\n'&& ch  != EOF))	{
		msg[n++] = ch; // n ends up as the message length
	}
	
	printf("In B1FF-speak: ");
	for(i = 0; i <n; i++) {
		char c = toupper((unsigned char) msg[i]); //step 1 : uppercase
	
		switch(c) {   // substituting it !
		case 'A': c = '4'; break;
		case 'B': c = '8'; break;
		case 'E': c = '3'; break;
		case 'I': c = '1'; break;
		case 'O': c = '0'; break;
		case 'S': c = '5'; break;
	}
	
	putchar(c);  //printing it ;
	
	}
	for ( i = 0; i< 10; i++) //exclamation marks
		putchar('!');
	putchar('\n');
		
	return 0;
}
