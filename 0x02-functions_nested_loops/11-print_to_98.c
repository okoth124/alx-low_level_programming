#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98
 *@n: arguement of the function
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	n = 0;

	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
