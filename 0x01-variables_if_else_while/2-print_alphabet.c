#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry code
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
