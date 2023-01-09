/*
 * file: 1-strdup.c
 * Auth: Et-tass Ayoub
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */

int	_strlen(char *str)
{
	int	i;
	
	i = 0;
	if (str == NULL)
		return(0);
	while (str[i])
		i++;
	return (i);
}

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/

#include <stdio.h>
#include <unistd.h>

char *_strdup(char *str)
{
	char 	*strdup;
	int	len;
	int	i;

	i = 0;
	len = _strlen(str) + 1;
	strdup = malloc(sizeof(char) * len - 1);
	if (!strdup)
		return (NULL);
	while (str[i])
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0'; 
	return (strdup);
}
