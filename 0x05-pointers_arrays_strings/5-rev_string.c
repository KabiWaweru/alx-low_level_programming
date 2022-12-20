#include "main.h"

/**
 * rev_string - This function reverses a string
 *
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	char *s_start = s;
	char *s_end;
	char temp;

	for (; *s; s++)
	{
	}

	s_end = s - 1;

	while (s_start < s_end)
	{
		temp = *s_start;
		*s_start = *s_end;
		*s_end = temp;

		s_start++;
		s_end--;
	}
}
