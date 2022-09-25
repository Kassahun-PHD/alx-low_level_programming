#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - a fucntio to change a lowercase string to  upper
 * @str: a string to be converted
 *
 * Return: return value of a function
 */
char *string_toupper(char *str)
{
	char *conv = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (conv);
}
