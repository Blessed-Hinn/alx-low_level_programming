#include "main.h"
/**
 * _strcpy - function name
 * @dest: Parameter
 * @src: Parameter
 * Return: Return value
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
