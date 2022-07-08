#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9.
 */

void print_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a);
		if (a == 9)
			_putchar('\n');
	}
}
