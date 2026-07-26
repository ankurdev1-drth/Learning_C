// Program that displays the numbers in a 4 by 4 arrangement followed by the sums of the rows, columns and diagonals
#include <stdio.h>
int main(void)
{	int q, w, e, r, t, y, u, i, o, p, a, s, d, f, g, h;
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &q, &w, &e, &r, &t, &y, &u, &i, &o, &p, &a, &s, &d, &f, &g, &h);
	printf("%d\t%d\t%d\t%d\n", q, w, e, r);
	printf("%d\t%d\t%d\t%d\n", t, y, u, i);
	printf("%d\t%d\t%d\t%d\n", o, p, a, s);
	printf("%d\t%d\t%d\t%d\n", d, f, g, h);

	printf("\n");
	printf("Row sums: %d %d %d %d\n",
           q + w + e + r,
           t + y + u + i,
           o + p + a + s,
           d + f + g + h);

    	printf("Column sums: %d %d %d %d\n",
           q + t + o + d,
           w + y + p + f,
           e + u + a + g,
           r + i + s + h);
	printf("Diagonal sums: %d %d\n",
           q + y + a + h,
           r + u + p + d);

    return 0;
 }
