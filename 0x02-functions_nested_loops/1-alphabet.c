#include "main.h"

/**
 * print-alphabet - prints the alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123 ; n++)
	{
		_putchar((char)n);
	}
	_putchar('\n');
}

