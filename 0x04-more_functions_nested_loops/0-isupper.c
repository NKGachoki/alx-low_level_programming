#include "main.h"

/**
 * _isupper - checks for upper case character
 *@c: character to be checked
 * Return: 1 if char is uppercase or 0 otherwise
 */

int _isupper(int c)
{

	if (c <= 'Z' && c >= 'A')
	return (1);

	else
	return (0);
}
