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
		putchar(n);
		if (n == 'z')
			putchar('\n');
	}
}
