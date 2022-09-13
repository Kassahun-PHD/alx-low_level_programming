#include <unistd.h>
#include <stdio.h>
int _putchar(char c);
/**
 * main - The main function definiition
 * Description: It prints the _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char str[8] = "_purchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
