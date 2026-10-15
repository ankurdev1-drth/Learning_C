#include <stdio.h>

#define MAX 1000

int main(void) {
    char msg[MAX];
    int ch, n = 0;
    char terminator = '\0';
    int i, j, start, end;
    int first = 1;                       // 1 until the first word is printed

    // loop 1: read the sentence and save the terminator
    printf("Enter a sentence: ");
    while (n < MAX && (ch = getchar()) != '\n' && ch != EOF) {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminator = ch;
            break;
        }
        msg[n++] = ch;
    }

    // loop 2: go backward, printing one word at a time
    printf("Reversal of sentence: ");
    i = n - 1;
    while (i >= 0) {
        while (i >= 0 && msg[i] == ' ')      // skip spaces
            i--;
        if (i < 0)
            break;

        end = i;                             // last letter of the word
        while (i >= 0 && msg[i] != ' ')      // move to the start of the word
            i--;
        start = i + 1;                       // first letter of the word

        if (!first)
            putchar(' ');
        first = 0;

        for (j = start; j <= end; j++)       // print the word forward
            putchar(msg[j]);
    }

    if (terminator != '\0')
        putchar(terminator);
    putchar('\n');

    return 0;
}
