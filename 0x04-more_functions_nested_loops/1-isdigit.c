#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: Character being checked
 * Return: Value to be returned/
 */

int _isdigit(int c);
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
