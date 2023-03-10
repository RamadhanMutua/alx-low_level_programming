#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * isNum - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/

int isNum(char num[])
{
	int p, l = strlen(num);

	for (p = 0; p < l; p++)
	{
		if (!isdigit(num[p]))
			return (1);
	}
	return (0);
}


/**
 * main - adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int p, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (p = 1; p < argc; p++)
		{
			if (isNum(argv[p]) == 0)
			{
				sum += atoi(argv[p]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
