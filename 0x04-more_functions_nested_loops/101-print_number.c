#include "main.h"
/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int m)
{
	int i = 1000000000;

	if (m > 0)
	{
	for (; i >= 1; i /= 10)
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
	}
	if (m == 0)
	{
		_putchar(m + '0');
	}
	else
	{
		m = m * -1;
		_putchar('-');
		for (; i >= 1; i /= 10)
			if (m / i != 0)
			{
				_putchar((m / i) % 10 + '0');
			}
	}
}
