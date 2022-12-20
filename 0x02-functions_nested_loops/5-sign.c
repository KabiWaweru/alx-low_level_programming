#include "main.h"

/**
 * print_sign - the function prints the sign of a number
 * @n: the number whose sign is to be found
 *
 * Return: 1 if greater than zero, 0 if equal an -1 when less
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
