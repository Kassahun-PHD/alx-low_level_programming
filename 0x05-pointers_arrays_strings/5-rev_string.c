#include <stdio.h>
#include "main.h"
/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int str = 0, i = 0;
	char cor;

	while (s[str] != '\0')
		str++;

	while (i < str--)
	{
		cor = s[i];
		s[i++] = s[str];
		s[str] = cor;
	}
}
