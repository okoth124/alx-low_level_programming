#include <stdio.h>
/**
 * main - Entry point
 * Description - program that prints the lowercase alphabet in reverse
 * Return: Always 0(Success)
 */

int main(void)
{
	int j;

	for (j = 122; j >= 97; j--)
		putchar(j);
	putchar('\n');
	return (0);
}
