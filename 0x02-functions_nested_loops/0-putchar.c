#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * main - This function prints _putchar
 *
 * _putchar - The prunt function
 * @c: character to be printed
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;
	char string[] = "_putchar";

	for (n = 0; strlen(string); n++)
	{
		_putchar(string[n]);
	}
	return (0);
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}

