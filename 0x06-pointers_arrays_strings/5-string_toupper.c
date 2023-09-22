#include "main.h"

/**
 * string_toupper - function to transform all lowercase in string to uppercase
 *
 * @c: character string pointer
 * Return: char pointer
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] =< 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
