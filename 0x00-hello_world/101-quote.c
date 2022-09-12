#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, 1, sizeof(str), stdout);
	fflush(stdout);
	fclose(stdout);
	return (1);
}
