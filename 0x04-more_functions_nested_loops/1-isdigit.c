#include "main.h"

/**
 * _isdigit - Check for digits 
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
