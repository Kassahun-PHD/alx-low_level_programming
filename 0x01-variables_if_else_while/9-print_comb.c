#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	char ch = 0;
	/*Write the Character to stdout*/
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch <= '8')
		{
			putchar(',');
		}
		else
		{
			putchar('$');
			putchar('\n');
		}
	}
	return (0);
}
