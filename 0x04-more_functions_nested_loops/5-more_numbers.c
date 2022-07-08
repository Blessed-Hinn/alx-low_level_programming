#include "main.h"
/**
 * more_numbers - ints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int n = 0, j;

	while (n < 10)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
			if (j == '14')
				_putchar('\n');
		}
		n++
	}
	_putchar('\n');
}
