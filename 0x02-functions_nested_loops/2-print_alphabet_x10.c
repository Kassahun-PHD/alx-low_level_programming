#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: prints alphabet 10 times in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char al = 'a';

		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		i++;
	}
}

