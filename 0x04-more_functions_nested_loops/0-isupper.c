#include <ctype.h>
/**
 * _isupper - checks for uppercase character.
 * @c: Character being considered.
 * Return: Value to be returned.
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
