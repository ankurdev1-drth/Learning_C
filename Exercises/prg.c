#include <stdio.h>
int main(void)
/*{	int i, j, k;
	i = 7;
	j = 8;
	i *= j + 1;
	printf("%d %d\n", i, j);
	return 0;
}*/

/*{	int i, j, k;
	i = j = k = 1;
	i +=  j += k;
	printf("%d %d %d\n", i, j, k);
	return 0;
}*/

/*{	int i, j, k;
	i = 1;
	j = 2;
	k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k);
	return 0;
}*/

/*{ int i, j, k;
  i *= j *= k;
  printf("%d %d  %d", i, j, k);
  return 0;
}*/

// { int i, j;
//  i = 6;
//  j = i += i;
//  i = 5;
//  j = (i -=2) + 1;
//  i = 7;
//  j = 6 + (i = 2.5);
//  i = 2; j = 8;
// j = ( i = 6) + ( j = 3); 
//  printf("%d %d\n", i, j);
 // return 0;
// }


// Question 11:
// part a:-
/*{	int i;
	i = 1;
	printf("%d", i++ -1);
	printf("%d\n", i);
	return 0;
}*/

/* part b */
/*{ int i, j;
  i = 10;
  j = 5;
  printf("%d", i++ - ++j);
  printf("%d %d", i, j);
  return 0;
}*/

// part c:- 
/*{ int i, j;
	i = 7, j = 8;
	printf("%d", i++ - --j);
	printf("%d %d\n", i, j);
	return 0;
}*/

// part d:-
{ int i, j, k;
  i = 3; j = 4; k = 5;
  printf("%d", i++ - j++ + --k);
  printf(" %d %d %d", i, j, k);
} 

