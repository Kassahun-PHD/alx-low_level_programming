#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	int ch = 0;

	/*Write the Character to stdout*/
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
