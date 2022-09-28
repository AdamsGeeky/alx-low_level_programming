#include "main.h"
int sqrt_find(int num, int root);
int _srt_recursion(int n);

/**
 * sqrt_find - find the natural square root of an inputted number
 * @num: the number to find its square
 * @root: the root to be tested
 * Return: If the number has a natural square root of an inputted number.
 *         If the number does not have natural square root: -1
 */

int sqrt_find(int num, int root)
{
	if (root * root == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (sqrt_find(num, root + 1));
}

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: The number to return the square root of.
 * Return: If n has natural square root - the natural square root of n.
 *         If n does not have a nutural square root: -1.
 */

int _sqrt_recursion(int n)
{
	int m = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_find(n, m));
}
