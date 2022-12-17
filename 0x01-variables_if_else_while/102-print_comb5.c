#include <stdio.h>

/**
 * main - This function prints all possible combinations of double numbers
 *
 * Return: 0, if successful
 */

int main(void)
{
	int m;
	int p;
	int q;
	int r;

	for (m = '0'; m <= '9'; m++)
	{
		for (p = '0'; p < '9'; p++)
		{
			for (q = '0'; q <= '9'; q++)
			{
				for (r = '0'; r <= '9'; r++)
				{
					if (m + p > r + q)
					{
						continue;
					}
					if ((m == q) && (p == r))
					{
						continue;
					}
					putchar(m);
					putchar(p);
					putchar(' ');
					putchar(q);
					putchar(r);
					if ((m == '9') && (p == '8') && (q == '9') && (r == '9'))
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
