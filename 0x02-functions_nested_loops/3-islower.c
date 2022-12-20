#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: the input character
 * Return: 1 if lowercase, 0 otherwise
 *
 */

int _islower(int c)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}
