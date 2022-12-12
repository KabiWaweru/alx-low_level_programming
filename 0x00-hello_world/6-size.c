#include <stdio.h>

/**
 * main- this function prints the sizes of different types
 *
 * Return: 0 if successfule, 1 if there is an error
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
