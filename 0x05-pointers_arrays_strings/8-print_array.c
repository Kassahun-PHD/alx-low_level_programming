#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
