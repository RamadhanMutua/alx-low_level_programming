#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - This is a function
 * Description:  Prints all numbers, 0-9 except 2 and 4
 *
 * Return: always (0) success
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		_putchar('0' + num);
	}
	_putchar('\n');
}
