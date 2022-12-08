#include <stdio.h>

/**
 * main - Entry point
 *
 * main: 'printing out size of data types'
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int j;
	long long int k;
	float d;
	char c;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(j));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(i));
	printf("Size of a float: %f byte(s)\n", sizeof(i));
	return (0);
}

