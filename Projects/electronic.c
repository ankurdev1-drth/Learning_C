//Setting up an array that remembers which segments should be "on" for each digit in an electric calculator/watch seven-segement displays numerical output
#include <stdio.h>
#define N 10
#define M 7
int main(void)
{	const int segments[N] [M] = {{1, 1, 1, 1, 1, 1, 0},
				      {0, 1, 1, 0, 0, 0, 0},
				      {1, 1, 0, 1, 1, 0, 1},
				      {1, 1, 1, 1, 0, 0, 1},
				      {0, 1, 1, 0, 0, 1, 1},
				      {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};
	return 0;
}
