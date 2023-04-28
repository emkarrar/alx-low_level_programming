#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number (\) is printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int dl;

		for (dl = 1; dl <= n; dl++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
