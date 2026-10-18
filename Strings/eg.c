#include <stdio.h>
#define STR_LEN 80
int main(){
    //char str[8] = "June 14"; // although a string literal but C views it as an abbreviation for an array initializer 
    //OR
    //char str[STR_LEN] = {'J', 'u', 'n', 'e', ' ', '1', '4', '\0'};
    //char str[] = "Are we having fun YET?";
    
    char sentence[STR_LEN + 1];

    printf("Enter a sentence: ");
   // gets(sentence);
    printf("%s", sentence);
    return 0;

}
