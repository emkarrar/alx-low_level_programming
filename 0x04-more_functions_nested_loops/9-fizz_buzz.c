#include <stdio.h>
/**
 * main - prints numbers with fizzbuzz test
 * @n: nums
 * Return: 0
 */

int main(int n)
{
	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 15 != 0)
		{
		printf("Fizz ");
		}
		else if (n % 5 == 0 && n % 15 != 0)
		{
		printf("Buzz ");
		}
		else if (n % 15 == 0)
		{
		printf("FizzBuzz ");
		}
		else
		{
		printf("%d ", n);
		}
	}
	return (0);
}
