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
		int r, dl;

		for (r = 0; r < n; r++)
		{

			for (dl = 0; dl < n; dl++)
			{
				if (dl == r)
					_putchar('\\');
				else if (dl < r)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
