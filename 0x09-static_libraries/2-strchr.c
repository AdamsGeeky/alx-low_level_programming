#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: If c is found: Pointer to the first occurence.
 * If c is not found - NULl.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	return ('\0');
}
