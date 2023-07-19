#include "main.h"
/**
 * _abs -function that computes the absolute value of an integer.
 *@i: takes an int i arguement
 *
 *Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
