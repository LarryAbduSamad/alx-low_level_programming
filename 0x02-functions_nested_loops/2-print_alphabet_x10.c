#include "main.h"

/**
 * print_alphabet - prints alphabets(a-z) in lowercase
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

/**
 * print_alphabet_x10 - prints print_alphabet function 10 times
 */
void print_alphabet_x10(void)

{

	int num;

	/* loop through alphabet and multiply it by 10 */
	for (num = '0'; num <= '9'; num++)
	{
		print_alphabet();
	}
}
