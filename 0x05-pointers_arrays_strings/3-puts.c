#include <stdio.h>
#include "main.h"
/**
 * _puts - a fucntion that prints a string followed by new line
 *@str: input string
 *
 * return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
