#include <stdio.h>

/**
 * main - prints all possible different combos of 3 digits
 * without repeating any
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m, k;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (k = '0'; k <= '9'; k++)
				if (((n != m) && (m != k)) && ((n < m) && (m < k)))
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if ((n != '7') || (m != '8') || (k != '9'))
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
