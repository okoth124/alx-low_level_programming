#include "main.h"
/**
 * _isdigit - function checks for digit
 *@c:arguement
 *Return: 1 if c digit 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
