#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix that will be measured
 *
 * Return: The number of bytes in s which
 * contains only the bytes fromaccept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
