#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %d byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (unsigned int)sizeof(a));
	printf("Size of a long long int: %d byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a float: %d byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}

