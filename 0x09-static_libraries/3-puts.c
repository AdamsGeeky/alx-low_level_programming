#include "main.h"

/**
 * _puts - print a string, followedby a new line
 * @str: pointer to string to print
 * Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
