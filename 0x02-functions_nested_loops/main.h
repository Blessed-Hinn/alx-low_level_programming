#include <stdio.h>
void print_alphabet_x10(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
		if (n == 'z')
			putchar('\n');
	}
}
