#include "main.h"

/**
 * print_last_digit - prints the last digit of an input
 * @n: input
 *
 * Return: last digit of input
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n + -(n * 2);
		_putchar('0' + n % 10);
		return (n % 10);
	}
	else
	{
		_putchar('0' + n % 10);
		return (n % 10);
	}
}
