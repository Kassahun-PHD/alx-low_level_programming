#include <unistd.h>
#include "main.h"

/**
 * _isalpha - Check for lowercase
 * @c: returns 1 if c is aphabet
 * Return: else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
