#include <stdio.h>

/**
 * main - prints the alphabet in lower case in recerse
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;

	for (n = 122 ; n > 96; n--)
	{
		putchar((char)n);
	}
	putchar('\n');
	return (0);
}

