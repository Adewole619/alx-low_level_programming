#include "main.h"

/**
 * print_alphabet - Alphabet in loweer case
 *
 *Reture: Always 0.
 */

void print_alphabet(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
