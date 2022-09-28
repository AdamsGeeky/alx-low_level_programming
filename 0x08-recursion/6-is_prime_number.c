#include "main.h"

/**
 * is_prime_number - checks if it a prime number
 * @n: integer params
 * Return: 1 if prime number
 *         otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n >= 2 && n <= 3)
		return (1);
	if (n % 2 == 0 || n % 5 == 0 || n <= 1 || n % 9 == 0)
		return (0);
	return (1 + is_prime_number(n % n));
}
