#include "main.h"
#include <string.h>
/**
 * _strlen - retirns length of a string
 * @s: the parameter
 * Return: return length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
