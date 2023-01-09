/*
 * File: 1-strdup.c
 * Auth: Et-tass Ayoub
 */

#include "main.h"
#include <stdlib.h>

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

	len = 0;
	i = 0;
	if (!str)
		return (NULL);
	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
