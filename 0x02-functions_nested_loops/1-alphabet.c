#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 * followed by new line
 * Return: void
 */

void print_alphabet(void)
{
	int ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}


