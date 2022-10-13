#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed
 */
void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);

	printf("%c", character);
}

/**
 * print_int - Prints an integer
 * @arg: A list of arguments pointing to
 *       the character to be printed
 */
void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);

	printf("%d", number);
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to
 *       the character to be printed
 */
void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);

	printf("%f", number);
}

/**
 * print_string - Prints a string
 * @arg: A list of arguments pointing to
 *       the character to be printed
 */
void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}

/**
 * print_all - Prints anyting, followed by new line.
 * @format: A string of character representing the argument types
 * @...: A variable number of arguments to be printed.
 *
 * Desc: Any argument not of type char, int, float,
 *       or char * is ignored
 *       If a string argument is NULL, (nil) is printed instead
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
