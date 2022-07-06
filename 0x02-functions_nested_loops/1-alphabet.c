#include "main.h"
/**
 * main - entry point
 * Return: always 0 (success)
 * print_alphabet - prints alphabets in lowercase,followed by a new line
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
