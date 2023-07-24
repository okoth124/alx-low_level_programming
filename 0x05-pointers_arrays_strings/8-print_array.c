#include "main.h"
/**
 * print_array - function prints elements of an array of digits
 * @a: input
 * @n: input
 * Return: void
 */
void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array < n; index_of_array++)
	{
		printf("%d ", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
