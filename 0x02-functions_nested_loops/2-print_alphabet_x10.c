#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower case
 * Return:void
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x <10; x++)
	{
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar(97 + i);
		}
		_putchar('\n');
	}

}
