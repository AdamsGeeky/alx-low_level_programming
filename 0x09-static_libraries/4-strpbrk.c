#include "main.h"

/**
 * _strpbrk - locates the first occirence in string s
 * of any bytes in the string bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: If a set is matched - a pointerto the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}

	return ('\0');
}
