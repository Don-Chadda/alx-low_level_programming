#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @str: string to add
 *
 * Return: a pointer to the resulting string
*/
char *strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	 	i++;
	}

	dest[i] = '\0';

	return (dest);
}
