#include <stdio.h>

/**
 * main - Entry point
 * Description :'program that prints all possible combinations of single-digit numbers.'
 * return always 0
 */

int main (void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		putchar(f);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
