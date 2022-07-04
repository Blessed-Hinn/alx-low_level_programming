#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 **/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
			putchar('\n');
	}
	return (0);
}
