// Translates an alphabetic phone number into numeric form:
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'C')
            ch = '2';
        else if (ch >= 'D' && ch <= 'F')
            ch = '3';
        else if (ch >= 'G' && ch <= 'I')
            ch = '4';
        else if (ch >= 'J' && ch <= 'L')
            ch = '5';
        else if (ch >= 'M' && ch <= 'O')
            ch = '6';
        else if (ch >= 'P' && ch <= 'S')
            ch = '7';
        else if (ch >= 'T' && ch <= 'V')
            ch = '8';
        else if (ch >= 'W' && ch <= 'Z')
            ch = '9';

        putchar(ch);
    }

    return 0;
}


/* why using getchar() instead of using scanf? because getchar() is specifically designed for reading charachters one at a time although the scanf can do the same thing here but the
getchar() makes the intention much clearer in this particular case ! */
