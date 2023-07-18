#include "main.h"
/**
 * print_alphabet - program that prints alphabet, lowercase.
 * Return: Always 0 (Success.
 */
void print_alphabet(void)
{
	char g = 'a';

	while (g <= 'z')
	{
		_putchar(g);
		g++;
	}
	_putchar('\n');
}
