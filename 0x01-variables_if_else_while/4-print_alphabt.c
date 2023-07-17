#include <Stdio.h>
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
		putchar(g);
		if (g == 113 || g == 101)
			continue;
	}
	putchar('\n');

return (0);
}
