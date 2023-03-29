#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Find the length of the string */
	while (*(s + len) != '\0')
		len++;

	/* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	/* Print a new line character */
	_putchar('\n');
}

