#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print all single digit number of base 10
 * starting from 0
 * only using patchar
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
