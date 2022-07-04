#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 **/

int main(void)
{
	int ch;
	int CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
		if (CH == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
