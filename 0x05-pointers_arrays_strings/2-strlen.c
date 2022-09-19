#include <stdio.h>
#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
		str++;
	return (str);
}
