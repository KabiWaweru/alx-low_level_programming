#include "main.h"

/**
 * swap_int - this function swaps the va;ues of the two arguments
 * @a: first argument
 * @b: second argument
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
