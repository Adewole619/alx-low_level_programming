#include "main.h"

/**
 * _islower - check lowercase character.
 * @c: integer 1 or 0
 * Return: 1 lowercase 0 Not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
