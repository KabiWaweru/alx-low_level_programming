#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout
 *
 * @str: The string to be printed
 */

void _puts(char *str)
{
	for ( ; *str; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
