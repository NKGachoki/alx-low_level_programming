#include <stdio.h>

/**
 * main - prints the smallest combo of 2 digits
 * without reusing them in the sequence
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if ((n != m) && (n < m))
			{
				putchar(n);
				putchar(m);
				if ((n != '8') || (m != '9'))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
