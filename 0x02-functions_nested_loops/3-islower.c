#include <unistd.h>
#include "main.h"

/**
 * _islower - Check for lowercase
 * @c: returns 1 if c
 * Return: else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
