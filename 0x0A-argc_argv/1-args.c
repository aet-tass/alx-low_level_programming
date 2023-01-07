/*
 * File: 1-args.c
 * Auth: Et-tass Ayoub
 */

#include <stdio.h>

/**
 * main - prints the number of arguenments passed to it
 * @ac: arguemnet count
 * @av: array of pointer to arguement strings
 * Return: 0
 **/
int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}

