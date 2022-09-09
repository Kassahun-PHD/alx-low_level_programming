#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
