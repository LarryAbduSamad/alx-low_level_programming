#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, i;

	for (len = 0; *(str + len) != '\0'; len++)
		;

	for (i = (len + 1) / 2; *(str + i) != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');
}

