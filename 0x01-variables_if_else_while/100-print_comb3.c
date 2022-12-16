#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;
	int m;

	for (n = '0'; n < '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			if (n == '8')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
