#include <unistd.h>
#include "main.h"

/**
 * _abs - solves the abs of number
 * @n: returns 1 for positive n and -1 for negative n
 * Return: else 0 for zero n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}

