#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/**
 *  main - -print alphabet in lowrcase
 * except for q and e
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
