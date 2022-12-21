#include "main.h"

/**
 * print_to_98 - prints all natural nubers from n to 99
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

/**
 * greater_than_98 - numbers greater that 98
 *
 * @n: the number
 */

void greater_than_98(int n)
{
	int m;

	for (m = n; m >= 98; m--)
	{
		if (m >= 100)
		{
			print_greater_than_100(m);
		}
		else
		{
			print_greater_than_10(m);
		}

		if (m == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * less_than_98 - less than 98
 *
 * @n: input
 */

void less_than_98(int n)
{
	int m;
	int p;

	for (m = n; m <= 98; m++)
	{
		if (m < 0)
		{
			_putchar('-');
			p = m + -(m * 2);
			if (p <= 9)
			{
				_putchar('0' + p);
			}
			else if (p >= 10)
			{
				print_greater_than_10(p);
			}
			else if (p >= 100)
			{
				print_greater_than_100(p);
			}
		}
		else if ((m >= 0) && (m <= 9))
		{
			_putchar('0' + m);
		}
		else
		{
			print_greater_than_10(m);

			if (m == 98)
			{
				return;
			}
		}
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_greater_than_10 - handles putchar of greater than10
 * @m: the input
 */

void print_greater_than_10(int m)
{
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);

}

/**
 * print_greater_than_100 - handles putchar of greater than 100
 * @m: the input
 */
void print_greater_than_100(int m)
{
	_putchar('0' + m / 100);
	_putchar('0' + (m % 100) / 10);
	_putchar('0' + (m % 100) % 10);

}
