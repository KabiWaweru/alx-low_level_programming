#include <stdio.h>
#include <unistd.h>
/**
 * main - this function prints to the standard error stream
 *
 * Return: 0 if successful
 */

int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2,string,sizeof(string));
	return (0);
}
