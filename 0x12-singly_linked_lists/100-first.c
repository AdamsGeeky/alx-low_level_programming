#include <stdio.h>

/**
 * printty - prints a string before the main function is executed
 */
void printty(void) __attribute__ ((constructor));

void printty(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
