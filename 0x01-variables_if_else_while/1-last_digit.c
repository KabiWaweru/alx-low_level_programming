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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char n_string [12];
	sprintf(n_string,"%d",n);
	char m = n_string[strlen(n_string)];
	if (m > '5')
	{
		printf("The last digit of n is %d and greater than 5\n", m);
	}

	else if (m > '0')
        {
                printf("The last digit of n is %d and greater than 5\n", m);
        }

        else if ((m < '6') && (m != '0'))
        {
                printf("The last digit of n is %d and is less than 6 an not zero\n", m);
        }
	return (0);
}
