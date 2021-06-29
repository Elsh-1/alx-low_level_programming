#include "holberton.h"
/**
 * _print_rev - a function that prints reversed string
 * @str: pointer to a string
 * Return: string
 */
void _print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
