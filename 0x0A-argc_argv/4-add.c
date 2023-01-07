/*
 * File: 1-args.c
 * Auth: Et-tass Ayoub
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num_checker - checks if a given char is number or not
 * @a: char to be checked
 * Return: 1, if its a number, else 0
 **/
int num_checker(char *nbr)
{
	int i; 
	int num; 
	int len;

	i = 0;
	num = 0;
	len = strlen(nbr);
	while (i < len)
	{
		if (nbr[i] < '0' || nbr[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (nbr[i] - '0');
		i++;
	}
	return (num);
}
/**
 * main - add positive numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of addition or 1
 **/
int main(int argc, char **argv)
{
	int i;
       	int num;
       	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = num_checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

