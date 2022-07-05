#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	int n;
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
		if (n == 'z')
			putchar('\n');
	}
}
