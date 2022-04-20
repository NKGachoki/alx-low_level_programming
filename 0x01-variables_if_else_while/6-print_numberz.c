#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * uses putchar instead of printf
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

