#include "main.h"

/**
 * print_alphabet - function that prints alphabet(a-z) in lowercse
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
	char letter = 'a';

	/* loop through the alphabet */
	while (letter <= 'z')
		{
		_putchar(letter);
		letter++; /* increment the letter */
		}

	_putchar('\n'); /* print a newline character */
}
