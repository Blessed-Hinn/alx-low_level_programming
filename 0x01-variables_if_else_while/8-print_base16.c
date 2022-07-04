#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 **/

int main(void)
{
	int num;
	int ch;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
		if (num == 9)
		{
			for (ch = 'a'; ch <= 'f'; ch++)
			{
				putchar(ch);
				if (ch == 'f')
					putchar('\n');
			}
		}
	}
	return (0);
}
