#include "main.h"
/**
 * print_sign -function that prints the sign of a number.
 *
 * @n: Is the Charcter in ASCII code
 * Return: 1 n>0, 0 n=0, otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n')
}

