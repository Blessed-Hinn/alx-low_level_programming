#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks whether a character is an alphabet or not.
 * @c: Integer to return.
 * Return: if 0 it is a digit, if 1 it's alphabet.
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
