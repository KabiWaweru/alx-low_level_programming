#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

/**
 * main - checks the last digit of a random generated number
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("The last digit of %d is %d and greater than 5\n", n, m);
	}

	else if (m > 0)
        {
                printf("The last digit of %d is %d and greater than 5\n", n, m);
        }

        else if ((m < 6) && (m != 0))
        {
                printf("The last digit of %d is %d and is less than 6 an not zero\n", n, m);
        }
	return (0);
}
