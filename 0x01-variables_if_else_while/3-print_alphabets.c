#include <stdio.h>

/**
 * main - print alphabet in both lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char letter;

	letter = 'a';

	/* loop through the alphabet in lowercase */
	while (letter <= 'z')
		{
		putchar(letter);
		letter++; /* increment the letter */
		}

	letter = 'A'; /* reset the letter to 'A' for uppercase */

	/* loop through the alphabet in uppercase */
	while (letter <= 'Z')
		{putchar(letter);
		letter++; /* increment the letter */
		}

	putchar('\n'); /* print a newline character */

	return (0);
}
