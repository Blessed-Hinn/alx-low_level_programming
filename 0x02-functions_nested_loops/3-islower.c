#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lowercase characters
 * int c - character to be checked
 * Return: If 0 (Uppercase), 1 (Lowercase)
 */

int _islower(int c)
{

	if (islower(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}
