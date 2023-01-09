/*
 * file: 1-strdup.c
 * Auth: Et-tass Ayoub
 */

#include "main.h"
#include <stdlib.h>


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
	while (str[i] !='\0')
		i++;
	return (i);
}

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/

char *_strdup(char *str)
{
	char 	*strdup;
	int	len;
	int	i;
	
	if (!str)
		return (NULL);
	i = 0;
	len = _strlen(str) + 1;
	strdup = malloc(sizeof(char) * len);
	if (!strdup)
		return (NULL);;
	while (str[i] != '\0')
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0'; 
	return (strdup);
}
