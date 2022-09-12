#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
/**
 * main - the start of main function
 *
 * Return: returns 1 at the end
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);
	fflush(stderr);
	return (1);
}
