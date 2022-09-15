#include "main.h"
/*
 * print_diagonal - draws a diagonal on the terminal
 * @n: The number of character '\' is printed
 * return: returns no value
 */

void print_diagonal(int n)
{
	int space, len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
i		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (len == (n-1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
