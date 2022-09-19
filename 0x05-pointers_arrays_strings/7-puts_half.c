#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int st = 0, i, j;

	while (str[st] != '\0')
		st++;

	if (st % 2 == 0)
		j = st / 2;

	else
		j = (st + 1) / 2;

	for (i = j; i < st; i++)
		_putchar(str[i]);

	_putchar('\n');
}
