/*
 * File: 5-rev_string.c
 * Auth: Ayoub Et-tass
 */

#include "main.h"


/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
