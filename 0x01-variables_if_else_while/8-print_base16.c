#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n;
	int c;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
