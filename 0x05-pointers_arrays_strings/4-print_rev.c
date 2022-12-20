#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the input string in reverse
 *
 * @s: The string to be printed in reverse
 */

void print_rev(char *s)
{
	int count = 0;
	int n;

	for ( ; *s; s++)
	{
		count++;
	}
	for (n = 1; n <= count; n++)
	{
		_putchar(*(s - n));
	}
	_putchar('\n');
}

