#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = n - 1; x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
