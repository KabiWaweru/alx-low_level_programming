#include "main.h"

/**
 * _isalpha - function checks for alphabetic character
 *@c: the character to be checked
 * Return: 1 if alphavetic character, 0 otherwise
 *
 */

int _isalpha(int c)
{
	int m;

	for (m = 65; m <= 90; m++)
	{
		if (c == m)
		{
			return (1);
		}
	}

	for (m = 97; m <= 122; m++)
	{
		if (c == m)
		{
			return (1);
		}
	}
	return (0);
}
