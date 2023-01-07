/*
 * File: 1-args.c
 * Auth: Et-tass Ayoub
 */

#include <stdio.h>

/**
 * main - prints the number of arguenments passed to it
 * @argc: arguemnet count
 * @argv: array of pointer to arguement strings
 * Return: 0
 **/
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

