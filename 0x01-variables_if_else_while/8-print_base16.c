#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 * followed by newline
 * Return: 0
 */

int main(void)
{
	char num;
	char letter;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
