#include <unistd.h>
#include "main.h"

/**
 * print_times_table - prints a print_times_table
 * @n: size of a table
 * Description: function prints every minute in one day
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				p = i * j;
				if (p <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p > 9 && p <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(p / 100 + '0');
					_putchar(p / 10 % 10 + '0');
					_putchar(p % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
