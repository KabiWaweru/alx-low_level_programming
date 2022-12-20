#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int n;

	while (count < 10)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar((char)n);
		}
		_putchar('\n');
		count++;
	}
}
