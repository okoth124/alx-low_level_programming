#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * void
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
