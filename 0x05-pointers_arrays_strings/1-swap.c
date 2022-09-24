#include "main.h"
/**
 * swap_int - Functions that swaps value of two integers
 * @a: value to be swapped
 * @b: Vlue to be swapped
 * return: no return value
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
