#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 * retunr: no return value
 */

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
		s++;

	for (i = s - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
