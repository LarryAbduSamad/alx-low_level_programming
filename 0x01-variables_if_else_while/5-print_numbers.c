#include <stdio.h>

/**
* main - print all base 10 numbers starting from 0
*
* Return: Always 0 (Success)
*/

int main(void)

{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	
	printf("\n");
	return (0);
}
