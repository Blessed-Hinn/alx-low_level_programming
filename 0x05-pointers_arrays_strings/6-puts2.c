#include "main.h"
/**
 * puts2 - prints character in alternate
 * @str : string as a parameter
 * return: no value in return
 */

void puts2(char *str)
{
	for (; *str = '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
