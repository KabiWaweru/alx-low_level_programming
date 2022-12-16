#include <stdio.h>

/**
 * main - This functin prints all possible combinations of single digit numbers
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
