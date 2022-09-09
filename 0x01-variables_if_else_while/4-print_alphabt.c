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
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
		if (ch == 'z')
			putchar('\n');
	}
	return (0);
}
