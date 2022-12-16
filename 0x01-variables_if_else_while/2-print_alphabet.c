#include <stdio.h>

/**
 * main - this function uses putchar to print the alphabet in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		putchar((char)n);
	}
	putchar('\n');
	return (0);
}

