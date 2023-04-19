#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv: array of arguments
 * Return: On success, 0
 * 1 on error.
 */

int main(int argc, char *argv[])
{
	int mini, j, no;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	no = atoi(argv[1]);
	mini = 0;

	if (no < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && no >= 0; j++)
	{
		while (no >= coin[j])
		{
			mini++;
			no -= coin[j];
		}
	}
	printf("%d\n", mini);
	return (0);
}
