#include "holberton.h"

/**
 * 
 * Description: function that prints the alphabet,in lower case
 * Return 0
 */
void print_alphabet(void)
{
	char x;

	for(x='a';, x<='z'; x++);
	{
		_putchar(x);
	}
	_putchar('\n')
}
