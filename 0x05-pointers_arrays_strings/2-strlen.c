#include "main.h"


/**
 * _strlen - this function returns the length of a string
 *
 * @s: the string whose length is to be found
 *
 * Return: the string length
 */


int _strlen(char *s)
{
	int length_count = 0;

	for ( ; *s; s++)
	{
		length_count++;
	}
	return (length_count);
}


