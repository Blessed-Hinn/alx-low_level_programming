#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 **/

int main(void)
{
	int num;

	for (num = 0; num <= 9 ; num++)
	{
		printf("%d", num);
		if (num == 9)
			printf("\n");
	}
	return (0);
}
