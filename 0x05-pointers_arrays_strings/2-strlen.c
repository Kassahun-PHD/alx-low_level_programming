#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the longht of a string
 * @s: the address of string
 * return - allways returns the length of string
 */
int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
		str++;
	return (str);
}
