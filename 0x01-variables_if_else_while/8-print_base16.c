#include <stdio.h>

/*
 * main - prints base 16 numbers in lowercase
 * followed by newline
 * Return: 0
 */

int main() 
{
	for (char num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	for (char letter = 'a'; letter <= 'f'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
