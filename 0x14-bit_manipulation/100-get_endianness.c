#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int c;
	char *s;

	c = 1;
	s = (char *) &c;

	return ((int)*s);
}
