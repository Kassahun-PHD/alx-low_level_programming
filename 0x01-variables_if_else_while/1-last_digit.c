#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ls = n % 10;
	if (ls >= 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, ls);
	else if (ls < 6 && ls != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
	else
		printf("Last digit of %d is %d and is 0\n", n, ls);
	return (0);
}
