#include "main.h"
#include <stdio.h>
/**
 * main - prints alphabet in lower case
 * followed by new line
 * Return: 0
 */

int main(void)
{
	int ch;
	ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
