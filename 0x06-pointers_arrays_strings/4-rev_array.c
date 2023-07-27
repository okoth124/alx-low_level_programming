#include "main.h"
/**
 *reverse_array - function reverses array of elements
 *@n: no of elements of array
 *@a: array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
