#include "main.h"
/**
 * swap_int - function swaps value of 2 integers
 * @a: args of the function
 * @b: arg of the function
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
