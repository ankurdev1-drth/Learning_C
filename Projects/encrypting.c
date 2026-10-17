//Encrypts a message using a Caesar cipher
#include <stdio.h>
#include <ctype.h>
#define MAX 100
int main(void){
	char msg[MAX];
	int ch, i, n =0;
	//storing the message first
	printf("Enter message to be encrypted: ");
	while (n < MAX && ((ch = getchar()) != '\n' && ch != EOF)){
			msg[n++] = ch;
	}
	
	//taking the input of shift amount 
	int original_key;
	printf("Enter shift amount (1-25): ");
	scanf("%d", &original_key);
	// the program should decrypt the message if the user enters 26 minus the original key
	// encrypting one character at a time 
	printf("Encrypted message: ");
	for (i = 0; i < n; i++){
		ch = msg[i];
		
		if (isupper((unsigned char) ch)) {
			ch = ((ch - 'A') + original_key) % 26 + 'A';
		} else if (islower((unsigned char) ch)) {
			ch = ((ch - 'a') + original_key) % 26 + 'a';
		}
	//anything else (spaces, punctuation) stays unchanged
	
	putchar(ch);
	}
	putchar('\n');
	
	return 0; 
	
}
