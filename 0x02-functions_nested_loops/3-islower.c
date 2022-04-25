#include "main.h"

/**
 * _islower - checks for lower case characters
 *
 * Return: 1 if c is lowercase, returns 0 otherwise
 */

int _islower(int c)
{
	
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else 
	{
		return (0);
	}

}
