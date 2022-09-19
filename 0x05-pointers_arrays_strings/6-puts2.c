#include <stdio.h>
#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;
	int st = 0;

	while (str[st] != '\0')
		st++;

	st -= 1;

	for (i = 0; i <= st; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
