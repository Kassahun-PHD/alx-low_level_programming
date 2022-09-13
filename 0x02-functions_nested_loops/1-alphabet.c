#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the alphabeltes in lowercase, followed by a new line.
 * Return: 0.
 */
int main(void)
{
        char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
        _putchar('\n');

        return (0);
}
