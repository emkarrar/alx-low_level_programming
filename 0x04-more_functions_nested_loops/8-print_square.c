#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int ln, wd;

		for (ln = 0; ln < size; ln++)
		{
			for (wd = 0; wd < size; wd++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
