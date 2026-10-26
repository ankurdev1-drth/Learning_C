// Finds the "smallest" and "largest" in a series of words
#include <stdio.h>
#define MAX 20
#include <string.h>

int main(void){
	char word[MAX + 1];
	char smallest_word[MAX + 1];
	char largest_word[MAX + 1];
	
	printf("Enter word: ");
	scanf("%20s", word);
	
	strcpy(smallest_word, word);
	strcpy(largest_word, word);
	
	while (strlen(word) != 4)
	{	printf("Enter word: ");
		scanf("%20s", word);
	
		if (strcmp(word, smallest_word) < 0)
			strcpy(smallest_word, word);
			
		if (strcmp(word, largest_word) > 0)
			strcpy(largest_word, word);	
		}
		
	printf("\nSmallest word: %s\n", smallest_word);
	printf("\nLargest word: %s\n", largest_word);
	return 0;
}

