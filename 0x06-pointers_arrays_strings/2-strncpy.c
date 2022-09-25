#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - a fucntion to copy string
 * @dest: destination string
 * @src: string to be coppied
 * @n: number of string
 * Return: return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
