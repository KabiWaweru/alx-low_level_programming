#include <stdio.h>

/**
 * main- this function prints the sizes of different types
 *
 * Return - 0 if successfule, 1 if there is an error
 */

int main(void)
{
	printf("Size of char is: %d byte(s)", sizeof(char));
	printf("Size of int is: %d bytes(s)", sizeof(int));
	printf("Size of long int is: %d byte(s)", sizeof(long));
	printf("Size of long long int is: %d bytes(s)", sizeof(long long));
	printf("Size of float is: %d bytes(s)", sizeof(float));
	return (0);
}
