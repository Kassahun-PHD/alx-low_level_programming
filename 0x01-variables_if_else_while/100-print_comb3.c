#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	int i = '0';
	int j = '1';

	/*Write the Character to stdout*/
	for (i = '0'; i <= '8'; i++)
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
