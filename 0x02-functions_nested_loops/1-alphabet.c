#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet,in lower case
 *
 * Return 0
 */
void print_alphabet(void)
{
	int x;

	for (x = 0; x < 26 ; x++)
	{
		_putchar(97+x);
	}
	_putchar('\n');
}
