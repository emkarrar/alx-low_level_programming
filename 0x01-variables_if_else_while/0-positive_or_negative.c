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
	printf("%i \n", n);

	if (n > 0)
	{
		printf(" is positive\n");
	}
	else if  (n < 0)
		printf(" is negarive\n");
	else
		printf(" is zero\n");

	return (0);
}
