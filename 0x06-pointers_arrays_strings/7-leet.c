#include <stdio.h>
#include "main.h"
/**
 * *leet - a function that changes letters with numbers
 * @str: a string tobe changed
 *
 * Return: return value
 */
char *leet(char *str)
{
	int i = 0, j;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     let[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (str[i])
	{
		for (j = 0; j < 10; j++)
			if (str[i] == let[j])
				str[i] = subs[j];

		i++;
	}

	return (str);
}
