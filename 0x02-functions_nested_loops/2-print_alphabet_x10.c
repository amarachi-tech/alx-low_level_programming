
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;
	char i;

	for (j = 0; i < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
