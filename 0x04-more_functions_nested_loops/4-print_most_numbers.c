#include "main.h"
/**
 * print_most_numbers- prints numbers, from 0 to 9, followed by a new line.
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2')
		{
			continue;
		}
		else if (a == '4')
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
		if (a == '9')
			_putchar('\n');
	}
}
