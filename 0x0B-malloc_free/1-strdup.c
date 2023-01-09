/*
 * File: 1-strdup.c
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
	while (str[i] != '\0')
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
	char	*new_str;
	int	len;
	int	i;

	if (!str)
		return (NULL);
	len = _strlen(str);
	new_str = malloc(sizeof(char) * len);
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
