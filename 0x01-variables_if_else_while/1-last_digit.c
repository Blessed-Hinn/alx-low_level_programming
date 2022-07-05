#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 **/

int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	if (rem > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, rem);
	}
	else if (rem == 0)
	{
		printf("Last digit of %d is %d and is 0", n, rem);
	}
	else
	{
		printf("Last digit of %d id %d and is less than 6 and not 0", n, rem);
	}
	return (0);
}
