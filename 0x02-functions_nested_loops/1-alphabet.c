#include "main.h"
/**
 * main - entry point
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int n;
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
		if (n == 'z')
			_putchar('\n');
	}
}
