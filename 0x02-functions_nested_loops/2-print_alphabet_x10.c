#include "main.h"
/**
 * print_alphabet_x10 - prints alpha 10x
 */
void print_alphabet_x10(void)
{
	int a, r = 0;

	for (r = 0; r <= 9; r++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

