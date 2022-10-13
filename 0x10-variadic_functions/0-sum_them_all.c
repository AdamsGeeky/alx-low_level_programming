#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passedto the function
 * @...: A variable number of parameters to calculate the sum of.
 * Return: If n == 0 - 0.
 *          Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sum = 0;
	va_list num;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
