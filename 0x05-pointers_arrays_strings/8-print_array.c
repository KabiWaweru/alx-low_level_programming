#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the input array
 * @n: the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0 ; m < n; m++, a++)
	{
		if (m != n - 1)
		{
			printf("%d, ",*a);
		}
		else
		{
			printf("%d",*a);
		}
		
	}
	putchar('\n');
}
