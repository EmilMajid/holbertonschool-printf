#include "main.h"
/**
 * _print_s - A function for printing strings
 * @a: leng
 * @b: string
 * Return: printing strings
 **/
int _print_s(unsigned int *a, char *b)
{
	int i = 0;

	if (!b)
	{
		write(1, "(null)", 6);
		*a += 6;
	}
	else
	{
		while (*(b + i) != '\0')
		{
			write(1, (b + i), 1);
			i++;
			(*a)++;
		}
	}
	return (*a);
}
