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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(i));
	return (0);
}

