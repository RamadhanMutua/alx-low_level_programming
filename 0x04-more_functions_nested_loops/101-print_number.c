#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints integer
 * @n: integer
 * Return: always (0) success
*/

void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		y = -n;
		_putchar(45);
	}
	else
	{
		y = n;
	}

	if (y / 10)
	{
		print_number(y / 10);
	}
	_putchar((y % 10) + '0');

}
