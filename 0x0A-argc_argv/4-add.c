#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adss positive numbers
 * @argc: Number of command line arguments
 * @argv: Array Name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, num, i;

	num = 1;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		for (num = 1; num < argc; num++)
		{
			for (i = 0; argv[num][i] != '\0'; i++)
			{
				if (!(isdigit(argv[num][i])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[num]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
