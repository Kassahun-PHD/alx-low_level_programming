#include <unistd.h>
#include "main.h"

/**
 * times_table - prints times_table of 9
 * Description: function prints times_table of 9
 * Return: nothing
 */
void times_table(void);
{
	int r, c, p;

	for (r = 0; r <= 9 ; r++)
	{
		for (c = 0; c < 9; c++)
		{
			p = r * c;
			_putchar(p + '0');
			_putchar(' ');
		}
		 _putchar('\n');
	}
}
