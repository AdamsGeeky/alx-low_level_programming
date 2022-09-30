#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the function
 * @argc: counts the arguments of the function
 * @argv: Array name
 * Return: Return always success.
 */
int main(int argc, char *argv[])
{
	int num, j, cent = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num > 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			cent++;
		}
	}
	printf("%d\n", cent);
return (0);
}
