#include "main.h"

/*
 * main - check last digit.
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int lastDig;
	if (n >= 0)
{
		lastDig = n % 10;
}
	else
{
		lastDig = (n % 10) * -1;
}
	_putchar('0' + lastDig);
return (lastDig);
}
