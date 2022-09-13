#include <unistd.h>
#include "main.h"

/**
 * print_sign - Check for sign of number
 * @n: returns 1 for positive n and -1 for negative n
 * Return: else 0 for zero n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
