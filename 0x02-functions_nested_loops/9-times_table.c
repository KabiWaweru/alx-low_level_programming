#include "main.h"

/**
 * times_table - finds the 9 times table
 *
 */

void times_table(void)
{
	int n;
	int m;
	int value;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++ )
		{
			value = m * n;
			if (value <= 9)
			{
				_putchar('0' + value);
				if (n == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			} 
			else
			{
				_putchar('0' + value / 10);
				_putchar('0' + value % 10);
				if (n == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
