#include "main.h"
/**
 * print_square - prints square using #
 * @size: arg int
 * Return: Always 0
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			_putchar('\n');
		else
			_putchar('#');
	}
}
