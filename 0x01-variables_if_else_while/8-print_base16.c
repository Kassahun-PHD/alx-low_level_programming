#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	char ch = 0;
	char hx = 'a';

	/*Write the Character to stdout*/
	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (hx = 'a'; hx <= 'f'; hx++)
		putchar(hx);
	putchar('\n');
	return (0);
}
