#include <stdio.h>
/**
 * main - Lists all numbers fro 1 to 100 with exceptions
 * Return: Returns 0 when exit
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", num);
		}

		if (num == 100)
		{
			printf("\n");
		}
	}		
		return (0);
}
