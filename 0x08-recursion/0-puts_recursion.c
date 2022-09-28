#include "main.h"

/**
 * _puts_recursion - print a string followed by a newline
 * @s: string character
 * Return: Always 0 success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
if (*s == '\0')
_putchar('\n');
}
