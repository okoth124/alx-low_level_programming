#include "main.h"
/**
  *print_rev - function prints str in reverse
  *@s: arg str
  *Return: void
  */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
