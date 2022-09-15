#include <stdio.h>
/**
 * main - Lists all numbers fro 1 to 100 with exceptions
 * Return: Returns 0 when exit
 */

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
			printf("Buzz ");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	
	return (0);
}
