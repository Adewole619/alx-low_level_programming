#include "main.h"

/**
 * _strlen - checks the length of a string
 *  @s: string to check @s: string to check
 *
 *   Return: c.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
