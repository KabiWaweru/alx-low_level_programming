#include <stdio.h>

/**
 * main - Prints all possible combinations of triple digit numbers
 *
 * Return: 0, if successful
 */

int main(void)
{
	int n;
	int m;
	int p;

	for (n = '0'; n < '8'; n++)
	{
		for (m = n + 1; m < '9'; m++)
		{
			for (p = m + 1; p <= '9'; p++)
			{
				putchar(n);
				putchar(m);
				putchar(p);
				if (n == '7')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

