#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a <= 2)
	{
		while (b <= 9)
		{
			while (c <= 5)
			{
				while (d <= 9)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');

					if ((a == 2) && (b == 3) && (c == 5) && (d == 9))
					{
						return;
					}
					d++;
				}
				d = 0;
				c++;
			}
			c = 0;
			d = 0;
			b++;
		}
		b = 0;
		c = 0;
		d = 0;
		a++;
	}
}
