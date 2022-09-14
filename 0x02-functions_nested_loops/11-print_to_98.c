#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints times_table of 9
 * @n: initial number
 * Description: function prints times_table of 9
 * Return: nothing
 */
void main(int n)
{
        int i;

        for (i = n; i <= 98; i++)
        {
                _putchar((i %10) + '0');
                _putchar(',');
                _putchar(' ');
        }
        _putchar('\n');
}
