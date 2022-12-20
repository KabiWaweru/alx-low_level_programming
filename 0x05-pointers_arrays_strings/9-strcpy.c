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
	for ( ; *src; src++,dest++)
	{
		*dest = *src;
	}
	return (dest);
}
