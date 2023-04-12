#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int width, bank;

	if (!b)
		return (0);

	i = 0;

	for (width = 0; b[width] != '\0'; width++)
		;

	for (width--, bank = 1; width >= 0; width--, bank *= 2)
	{
		if (b[width] != '0' && b[width] != '1')
		{
			return (0);
		}

		if (b[width] & 1)
		{
			i += bank;
		}
	}

	return (i);
}

