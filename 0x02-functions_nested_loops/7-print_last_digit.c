#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit
 * @n: the numbeer being checked
 * Return: Return the last digit
 */

int print_last_digit(int n)
{
	int m;

	m = abs(n % 10);
	_putchar(m + '0');
	return (m);
}
