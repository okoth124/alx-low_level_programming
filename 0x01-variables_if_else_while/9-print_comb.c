#include <stdio.h>

/**
 * main - Entry point
 * Description - prints all possible combinations of single-digit numbers.
 * Return: Always 0(success)
 */

int main(void)
{
	int f;

	for (f = 48; f <= 57; f++)
	{
		putchar(f);
		if (f == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
