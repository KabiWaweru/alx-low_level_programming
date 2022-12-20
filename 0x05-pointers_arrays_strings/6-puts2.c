#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: the input string
 */

void puts2(char* str)
{
	int count = 0;

	for ( ; *str; str++)
	{
		count++;
		if (count % 2 == 0)
		{

		}
		else
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
