#include <stdio.h>

/**
 * main - This functions prints all the numbers of base 16
 *
 * Returs: 0, if successful
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n < 'g'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
