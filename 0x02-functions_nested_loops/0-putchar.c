#include <main.h>

/**
 * main - Entry point
 *
 *Return: always 0(Success)
 *
 */

int main(void)

{
	char l[] = {"_putchar"};
	int i;
	char str[] = "_putchar";
	int ch;

	for (i = 0; i < 9; i++)
	{
		_putchar(l[i]);
	}
	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);

}
