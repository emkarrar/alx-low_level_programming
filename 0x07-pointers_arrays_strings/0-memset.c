#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: address
 * @b: value to be changed
 * @n: size to be changed
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
