#include "main.h"

/**
 * *_strncat - concatenates strings
 * @dest: char parameter1
 * @src: char parameter2
 * @n: interger parameter
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
