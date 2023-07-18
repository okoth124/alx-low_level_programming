#include "main.h"
void print_alphabet_x10(void)

	int f = 0;

	while (f <= 9)
	{	
		int h = 97;

		while(h <= 122)
		{
			putchar(h);
			h++;
		}
		f++;
	}

