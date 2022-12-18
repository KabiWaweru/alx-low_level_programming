#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @c : The character to print
 *
 * Return: 0 on success and -1 if there is an errpr
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
