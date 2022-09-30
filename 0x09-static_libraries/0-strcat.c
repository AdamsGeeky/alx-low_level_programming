#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: char parameter
 * @src: char parameter1
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
