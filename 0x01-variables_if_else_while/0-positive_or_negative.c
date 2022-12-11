#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - assings a new number to nand determines its nature
 *
 *Return: Always 0 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*using if statement*/
	if (n > 0)
	{
		printf("%d is positive",n);
	}
	else if (n = 0)
	{
		printf("%d is zero",n);
	}
	else
	{
		printf("%d is negative",n);
	}
	return (0);
}
