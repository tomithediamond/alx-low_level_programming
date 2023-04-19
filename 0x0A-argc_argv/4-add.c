#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - checks for digits in a string
 * @str: the string
 * Return: Always 0
 */

int check_num(char *str)
{
	unsigned int amount = 0;

	while (amount < strlen(str))
	{
		if (!isdigit(str[amount]))
		{
			return (0);
		}
		amount++;
	}
	return (1);
}

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int addi, amount, cha;

	amount = 1;

	while (amount < argc)
	{
		if (check_num(argv[amount]))
		{
			cha = atoi(argv[amount]);
			addi += cha;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		amount++;
	}

	printf("%d\n", addi);
	return (0);
}
