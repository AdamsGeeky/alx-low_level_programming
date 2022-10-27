#include "main.h"

/**
 * binary_to_uint - converts a binary to number to an
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;
	int i, base_two;

	if (!b)
		return (0);

	value = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			value += base_two;
		}
	}

	return (value);
}
