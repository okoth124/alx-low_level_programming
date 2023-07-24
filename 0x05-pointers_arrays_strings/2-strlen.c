#include "main.h"
/**
 * _strlen - function that returns length of a string
 * @s: string arg
 * Return: Always 0(Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
