#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints a sequence of numbers
 * @n : initial numbers
 * Description: function prints every minute in one day
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		i = n;

		_putchar ((i / 10) + '0');
		_putchar ((i % 10) + '0');
	}
	else if (n > 98 && n <= 111)
	{
		for (i = n; i >= 98; i--)
		{
			_puchar ((i / 100) + '0');
			_putchar((i / 10)  + '0');
			_putchar((i % 10) + '0');
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n < 0 && n < 98)
	{
		for (i = n; i >= 98; i++)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
