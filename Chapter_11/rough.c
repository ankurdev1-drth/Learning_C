 #include <stdio.h>
 int main(void){
    int i;
    int *p;
    int *j;
    i = 7;
    p = &i;
    j = *&p;
    *p = 2; // in direction of p there is an object, that is 2 , but i is still 7, because p is a pointer to i, and we are changing the value of i through the pointer p.
    printf("i = %d\n", i);
    printf("p = %d\n", *p);
    printf("j = %d\n", *j);
    return 0;
 }
