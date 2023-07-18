#include <stdio.h>
/**
 * main - Entry point
 * Description - program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int r = 48;
	int s = 97;

	while (r <= 57)
	{
		putchar(r);
		r++;
	}
	while (s <= 102)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
return (0);
}
