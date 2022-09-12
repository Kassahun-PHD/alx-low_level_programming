#include <stdio.h>
/**
 * main - the start of main function
 *
 * Return: returns 0 at the end
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%lu bytes", (unsigned long)sizeof(a));
	printf("Size of a int:%lu bytes", (unsigned long)sizeof(b));
	printf("Size of a long int:%lu bytes", (unsigned long)sizeof(c));
	printf("Size of a long long int:%lu bytes", (unsigned long)sizeof(d));
	printf("Size of a float:%lu bytes", (unsigned long)sizeof(e));
	return (0);
}
