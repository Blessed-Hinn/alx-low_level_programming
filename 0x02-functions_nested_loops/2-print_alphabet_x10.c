#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times, in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
	char n;
	int n = 1;

	while (n <= 10)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
		if (n == 'z')
			putchar('\n');
	}
	n++
	}
}
