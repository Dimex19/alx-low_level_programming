#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product = product * argv[i];
			printf("%s\n", product);
		}
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
