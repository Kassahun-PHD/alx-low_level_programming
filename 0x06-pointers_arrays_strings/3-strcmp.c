#include <stdio.h>
#include "main.h"
/**
 * _strcmp - a fucntion to compare two string
 * @s1: first string
 * @s2: second string
 * Return: return value 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
