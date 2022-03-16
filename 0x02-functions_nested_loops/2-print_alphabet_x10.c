#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case 10x
 * followed by new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a = 0, b;

	while (a < 10)
	{
		b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}

}
