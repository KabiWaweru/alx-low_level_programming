#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies source string including null char to destination
 *
 * @src: the string to be copied
 * @dest: destination
 *
 * Return: destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	char *dest_end;

	for ( ; *src; src++,dest++)
	{
		*dest = *src;
	}
	dest_end = dest + 1;
	*dest_end = *src;
	return (dest_start);
}
