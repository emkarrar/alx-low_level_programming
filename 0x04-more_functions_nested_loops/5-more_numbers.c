#include "main.h"
/**
 * more_numbers - prints num from 0 to 14 10x
 */
void more_numbers(void)
{
	int row, n;

	for (row = 0; row <= 9; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
