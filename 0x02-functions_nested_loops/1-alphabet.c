#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the alphabeltes in lowercase, followed by a new line.
 * Return: No return type
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
