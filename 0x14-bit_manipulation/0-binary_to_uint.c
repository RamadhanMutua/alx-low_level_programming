// Include the "main.h" header file
#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to an unsigned integer.
 * @b: A pointer to a string representing a binary number.
 *
 * Return: An unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	// Declare variables
	unsigned int i;
	int width, bank;

	// Check if b is null, and return 0 if it is
	if (!b)
		return (0);

	// Initialize i to 0
	i = 0;

	// Loop through the string to find its length
	for (width = 0; b[width] != '\0'; width++)
		;

	// Decrement width to the last character of the string, and initialize bank to 1
	for (width--, bank = 1; width >= 0; width--, bank *= 2)
	{
		// Check if the current character is a valid binary digit (0 or 1)
		if (b[width] != '0' && b[width] != '1')
		{
			// If it's not, return 0
			return (0);
		}

		// If the current character is 1, add the corresponding power of 2 to i
		if (b[width] & 1)
		{
			i += bank;
		}
	}

	// Return the converted unsigned integer
	return (i);
}
