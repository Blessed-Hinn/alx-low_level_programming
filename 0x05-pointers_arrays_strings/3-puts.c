#include "main.h"
/**
 * _puts - puts a string followed by a new line
 * @str: The string to be output
 * Return: Returns the length of string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
