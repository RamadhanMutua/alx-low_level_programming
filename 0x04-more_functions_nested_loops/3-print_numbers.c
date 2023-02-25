#include <stdio.h>
#include "main.h"

/**
 * print_numbers - this is the function
 * Description: Prints the numbers 0 to 9 followed by a newline
 *
 * Return: always (0)
*/

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48 + num);
	}
	_putchar('\n');
}
