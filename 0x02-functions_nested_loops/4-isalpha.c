#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character is ASCII code
 * Return: 1 if c is letter otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
