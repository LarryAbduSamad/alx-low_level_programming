#include "main.h"

/**
 * positive_or_negative - function prints negative or positive integer
 * @i: the integer to print
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)

{

	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);

	printf("\n");
}