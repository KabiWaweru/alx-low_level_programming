#include "main.h"

/**
 * _abs - finds the absolute value
 * @n: value whose absolute value is to be found
 *
 * Return: absolute value
 *
 */

int _abs(int n)
{
	int m;

	if (n < 0)
	{
		m = -(n * 2);
		return (m + n);
	}
	else
	{
		return (n);
	}
}
