/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if  (n < 0)
		printf("%i is negarive\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
