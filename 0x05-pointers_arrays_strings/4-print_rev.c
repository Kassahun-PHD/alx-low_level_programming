#include <stdio.h>
#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int str = 0;

	while (s[str] != '\0')
		str++;

	while (str)
		_putchar(s[--str]);

	_putchar('\n');
}
