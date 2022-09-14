#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints times_table of 9
 * @n: initial number
 * Description: function prints times_table of 9
 * Return: nothing
 */
void main(int n)
{
	int i;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i <= 98; i--)
                {
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
