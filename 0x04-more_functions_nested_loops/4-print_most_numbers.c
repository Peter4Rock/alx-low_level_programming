#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2,4
 *
 * Return: always void
 */

void print_most_numbers(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
		if (f != '2' && f != '4')
			_putchar(f);
	}
	_putchar('\n');
}
