#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in the memory which contains a copy of the string
 * passed.
 * @str: pointer to string being duplicated.
 *
 * Return: NULL if str is NULL.
 * pointer to duplicated string on success.
 * NULL if memory was insufficient.
 */
char *_strdup(char *str)
{
	unsigned int index, length;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	dest = malloc(sizeof(char) * (length + 1));

	if (dest == NULL)
		return (NULL);

	for (index = 0; index < length; index++)
	{
		dest[index] = str[index];
	}
	dest[length] = '\0';
	return (dest);
}
