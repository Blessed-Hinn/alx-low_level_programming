#include "main.h"
/**
 * print_alphabet - prints al[habet in lowercase, follwed by a new line
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
		if (n == 'z')
			_putchar('\n');
	}
}
