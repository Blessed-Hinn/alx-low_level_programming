#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 **/

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
		if (ch == 'a')
			putchar('\n');
	}
	return (0);
}
