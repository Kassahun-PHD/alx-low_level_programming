#include <stdio.h>
#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to
 * by src to the buffer pointed by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *str;

	while (*src)
		*dest++ = *src++;
	*str = dest;
	return (str);
}
