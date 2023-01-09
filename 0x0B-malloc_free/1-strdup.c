
#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/

char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	i = 0;
	while (str[i])
		++i;
	i += 1;
	p = malloc(sizeof(*str) * (i));
	if (p == NULL)
		return (NULL);
	j = 0;
	while (str[j])
	{
		p[j] = str[j];
		++j;
	}
	p[j] == 0x00;
	return (p);
}
