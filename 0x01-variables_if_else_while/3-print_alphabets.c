#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
	int s = 97;
	int o = 65;

	while (s <= 122)
	{
		putchar(s);
		s++;
	}
	while (o <= 90)
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
