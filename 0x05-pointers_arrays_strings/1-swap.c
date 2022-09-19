#include <stdio.h>
#include "main.h"
/**
 * swap_int- a function that swaps the value of int a and b
 * @a: the first int value
 * @b: the second int value
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int cor;

	cor = *a;
	*a = *b;
	*b = cor;
}
