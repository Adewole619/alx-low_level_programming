#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(viod)
{
	int d = 48, a = 48;

	while (d < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (d != a && d < a)
			{
				putchar(d);
				putchar(a);

				if (!(d == 56 && a == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		d++
	}
	putchar('\n');

	return (0);
}

