/*
 * File: 3-mul.c
 * Auth: Et-tass Ayoub
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char **argv)
{
	int	a;
	int	b;
	int	result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* rthe atoi function convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
