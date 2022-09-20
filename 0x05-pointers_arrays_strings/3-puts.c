#include "main.h"

/**
 * _puts - prints a string and a new line
 *@str: pointer to a string to print
 *
 *  Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; str++)
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}