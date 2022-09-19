#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
