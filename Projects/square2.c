// Modification of square.c 
/* things modified:
	- pause after every 24 squares and displays "Press Enteer to continue..." message
	- after displaying the message program will use getchar to read a character. 
*/

#include <stdio.h>

int main(void)
{
    int n, i;
    int count = 0;

    printf("Enter the number n: ");
    scanf("%d", &n);

    // Remove the newline left by scanf
    getchar();

    for (i = 2; i * i <= n; i += 2) {

        printf("%ld\n", (long)i * i);
        count++;

        if (count == 24) {
            printf("Press Enter to continue...");
            getchar();
            count = 0;
        }
    }

    return 0;
}
