#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 * followed by new line
 * Return: void
 */

void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}

}
