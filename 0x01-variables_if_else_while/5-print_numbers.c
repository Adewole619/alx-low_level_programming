#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/**
 * main - print all single digit number of base 10
 * starting from 0.
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);

}
