#include "main.h"
/**
 * _puts - function outputs a string
 * @str: arg for str
 * Return: void
 */
void _puts(char *str)
{	
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');

}
