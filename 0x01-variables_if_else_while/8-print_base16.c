#include <stdio.h>

/**
* main - prints all numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)

{
	int num = '0';

	while (num < 10)
	{
		putchar(num);
		num++;
	}

	num = 'a';

	while (num <= 'f')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
