#include <stdio.h>
/**
 * main - Entry point.
 * Description -a program that prints the alphabet in lowercase.
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);


}
