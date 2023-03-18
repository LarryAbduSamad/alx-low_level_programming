#include <stdio.h>

/**
 * main - print alphabet(a-z) in lowercse
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char letter = 'a';

	/* loop through the alphabet */
	while (letter <= 'z')
		{
		putchar(letter);
		letter++; /* increment the letter */
		}

	putchar('\n'); /* print a newline character */

	return (0);
}
