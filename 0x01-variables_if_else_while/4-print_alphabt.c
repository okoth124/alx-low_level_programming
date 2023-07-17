#include <stdio.h>
/**
 * main - Entry Point
 * Discription: 'a program that prints the alphabet in lowercase'
 * return is always 0
*/

int main(void)
{
	int g = 97;

	while (g <= 122)
	{
		if (g == 113 || g == 101)
		{
			g++;
			continue;
		}
		putchar(g);
		g++;
	}
	putchar('\n');

return (0);
}
