#include <stdio.h>

/**
 * main prints the alhabet in lowercase, followed by a
 * new line
 * Return is always 0
 */
int main(void)
{
	char cAL;

	for (cAL = 'a'; cAL <= 'z'; cAL++)
	{
		putchar(cAL);
	}
	putchar('\n');
	return (0);
}
