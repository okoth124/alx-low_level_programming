#include <stdio.h>

/**
 * main - Entry point.
 * Description - a program that prints all single digit numbers of base 
 * return: always 0 (success)
 */

int main(void)
{
	int p = 0;

	while (p <= 9)
	{
		putchar(p + 48);
		p++;
	}
	putchar('\n');
	return (0);
}
