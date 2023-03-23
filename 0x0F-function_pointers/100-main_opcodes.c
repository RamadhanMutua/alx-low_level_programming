#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the opcodes
 *              of its own main function.
 *              Usage: ./main number_of_bytes
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always Successful
*/

int main(int argc, char *argv[])
{
	int prod, nums;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nums = atoi(argv[1]);
	if (nums < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (prod = 0; prod < nums; prod++)
	{
		printf("%02x", ptr[prod] & 0xFF);
		if (prod != nums - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
