#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints times_table of 9
 * @n: initial number
 * Description: function prints times_table of 9
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; n--)
		{
			printf("%d", i);

			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
