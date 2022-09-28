#include "main.h"
/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + find_strlen(s + 1));
}

/**
 * compare - compare each character of the string
 * @s: string
 * @n1:smallest iterator.
 * @n2: biggest iterator.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
return (0);
}

/**
 * is_palindrome - Checks if i's a palindrome
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (compare(s, 0, find_strlen(s) - 1));
}
