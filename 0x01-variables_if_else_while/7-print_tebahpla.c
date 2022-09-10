#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/**
 * main - -print lower case latter in reverse
 *
 * Return: Always 0.
 */

/* betty style doc for function main goes there */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);

}
