#include "main.h"
/**
 * _memset - fill
 * @s: starting
 * @b: the
 * @n: number
 *
 * Return: ch
 */
char *_memset(char *s, char b, unsigned int n)
{

	for (int i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
