#include "holberton.h"
/**
 * _print_rev - a function that prints reversed string
 * @str: pointer to a string
 * Return: string
 */
void _print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
