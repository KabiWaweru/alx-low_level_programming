#include "main.h"

/**
 * puts_half - prints the second half of an input string
 * @str: input string
 */

void puts_half(char *str)
{
	int count = 0;
	int n;
	char *str_end;

	for ( ; *str; str++)
	{
		count++;
	}

	str_end = str - 1;

	if (count % 2 == 0)
	{
		for (n = count / 2 - 1; n >= 0; n--)
		{
			_putchar(*(str_end - n));
		}
		_putchar('\n');
	}
	else
	{
		for (n = ((count - 1) / 2) - 1; n >= 0; n--)
		{
			_putchar(*(str_end - n));
		}
		_putchar('\n');
	}
}
