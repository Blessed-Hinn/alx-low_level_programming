#include "main.h"
/**
 * _strcat - function tha concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: Pointer to resulting string
 */

char *_strcat(char *dest, char *s)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
