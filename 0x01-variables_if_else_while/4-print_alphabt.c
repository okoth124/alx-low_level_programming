#include <stdio.h>
/**
 * main - Entry Point.
 * Description - program that prints the alphabet in lowercasE 
 * Return: Always 0(success) 
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
