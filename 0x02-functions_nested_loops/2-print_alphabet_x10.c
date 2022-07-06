#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 time.
 */
void print_alphabet_x10(void)
{
	char n;
	int m = 1;

	while (m <= 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
		if (n == 'z')
			_putchar('\n');
	}
	m++;
	}
}
