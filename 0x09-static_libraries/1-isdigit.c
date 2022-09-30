#include "main.h"

/**
 * _isdigit - check if the character is a digit
 * @c: carrier variable
 * Return: 1 if true, o if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
