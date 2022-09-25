#include <stdio.h>
#include "main.h"
/**
 * reverse_array - a fucntion that reverses a string
 * @a: the first string
 * @n: number of string
 * Retrun: return value nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
