#include"main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar(92);	/*is equal to '/' char*/
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

