#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main program
 * Return: NO return value
 */

int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		print("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}
