#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute value of integer
 * @s: is argument for function
 *
 * Return: always (0) success
*/

int _abs(int s)
{
	if (s < 0)
	{
		s = (-1) * s;
	}

	return (s);
}
