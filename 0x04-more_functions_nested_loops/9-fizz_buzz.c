#include <stdlib.h>
#include <stdio.h>
/**
 * main - Lists all numbers fro 1 to 100 with exceptions
 * Return: Returns 0 when exit
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if(a % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", a);
		}

		if (a == 100)
			printf("\n");
	}
}
