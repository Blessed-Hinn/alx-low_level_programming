#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 1)
	{
		printf("%f is negative",n);
	}
	else if (n == 0)
	{
		printf("%f is zero",n);
	}
	else
	{
		printf("%f is positive",n);
	}
	return (0);
}
