#include "main.h"
/**
 * print_line: draws straight line in terminal
 * @n: arg int
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; n++)
		_putchar('_');
	_putchar('\n');
}
