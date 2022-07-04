#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 **/

int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'e')
			continue;
		if (ch == 'z')
			putchar('\n');
	}
	return (0);
}
