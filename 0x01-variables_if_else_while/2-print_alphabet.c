#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - print alphabet in lower case
 * Return:Always 0.
*/

int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar ('\n');
	return (0);
}
