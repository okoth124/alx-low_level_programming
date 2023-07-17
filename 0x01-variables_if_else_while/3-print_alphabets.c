#include <stdio.h>
/**
 * Main - Entry point
 * Description: 'Write a program that prints the alphabet in lowercase'
 * Return: Always 0 (Success)
*/

int main(void)
{
	int s;
	int o;

	for (s = 97; s <= 122; s++)
		putchar(s);
	for (o = 65; o <= 90; o++)
		putchar(o);
	putchar('\n');

	return (0);
}
