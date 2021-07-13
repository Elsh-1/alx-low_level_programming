#include <stdio.h>
/**
 * main - program that prints its name
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc , char const *argv[])
{
	int count;
	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

