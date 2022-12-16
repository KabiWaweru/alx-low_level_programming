#include <stdio.h>

/**
 * main - This functin prints all possible combinations of single digit numbers
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
