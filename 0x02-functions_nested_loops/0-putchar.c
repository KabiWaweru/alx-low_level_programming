#include <string.h>
#include "main.h"

/**
 * main - This function prints _putchar
 *
 * _putchar - The print function
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;
	char string[] = "_putchar";

	for (n = 0; n < (int)strlen(string); n++)
	{
		_putchar(string[n]);
	}
	_putchar('\n');
	return (0);
}
