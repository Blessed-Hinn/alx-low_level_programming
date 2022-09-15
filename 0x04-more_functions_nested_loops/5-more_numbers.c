#include "main.h"
/**
 * more_numbers - ints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int n = 1;
	int j;

	while (n <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		n++;
	}
}
