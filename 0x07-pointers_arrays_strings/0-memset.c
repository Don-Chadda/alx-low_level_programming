#include "main.h"

/**
 * *_memset - file memory with constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{

for (unsigned int i = 0; n > 0; i++, n--)
{
	s[i] = b;
}

return (s);
}
