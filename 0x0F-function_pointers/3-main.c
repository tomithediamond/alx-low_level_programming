#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <3-calc.h>

/**
 * main - prints the result of an operation
 * @argc: argument count
 * @argv: array of pointers to argument
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int w, x;
	char *y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	w = atoi(argv[1]);
	y = argv[2];
	x = atoi(argv[3]);

	if (get_op_func(y) == NULL || y[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*y == '/' && x == 0) || (*y == '%' && x == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(y)(w, x));
	return (0);
}
