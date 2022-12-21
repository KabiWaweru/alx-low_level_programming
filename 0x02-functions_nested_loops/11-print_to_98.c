#include "main.h"

/**
 * print_to_98 - prints all natural nubers from n to 98
 * greater_than_98 - if greater than 98
 * less_than_98 - if less than 98
 *
 * @n: number to start printing from
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		less_than_98(n);
	}
	else
	{
		greater_than_98(n);
	}
	_putchar('\n');
}

void greater_than_98(int n)
{
	int m;

	for (m = n; m >= 98; m--)
	{
		if (m >= 100)
		{
			_putchar('0' + m / 100);
			_putchar('0' + (m / 100) / 10);
			_putchar('0' + (m / 100) % 10);
		}
		else
		{
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
		}

		if (m == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
	}
}

void less_than_98(int n)
{
	int m;
	int p;

	for (m = n; m <= 98; m++)
	{
		if (m <= 9)
		{
			if (m < 0)
			{
				_putchar('-');
				p = m + -(m* 2);
				if (p <= 9)
				{
					_putchar('0' + p);
				}
				else
				{
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
			}
			else
			{
				_putchar('0' + m);
			} 

			if (m == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);

			if (m == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
