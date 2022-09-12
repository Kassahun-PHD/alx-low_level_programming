#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of main function
 *
 * Return: returns 1 at the end
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	char str1[] = "\n";

	fwrite(str, 1, sizeof(str), stderr);
	fflush(stderr);
	fwrite(str1, 1, sizeof(str1), stdout);
	fflush(stdout);
	return (1);
}
