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
	int k = '0';

	/*Write the Character to stdout*/
	for (i = '0'; i <= '7'; i++)
		for (j = i + 1; j <= '8'; j++)
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
