#include <stdio.h>
/**
 * main - entry point - parameter: n Return: 0
 */
int man(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
