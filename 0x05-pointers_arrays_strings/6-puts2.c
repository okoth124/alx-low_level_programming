#include "main.h"
/**
 * puts2 - function prints every other char of str
 * @str: parameter of the function
 * Return: void
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
