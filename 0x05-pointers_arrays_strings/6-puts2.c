#include "main.h"
#include <string.h>
/**
 * puts2 - prints character in alternate
 * @str : string as a parameter
 * return: no value in return
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
