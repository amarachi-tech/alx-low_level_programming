
#include <stdio.h>
#include "main.h"
/**
 * print_rev - functions to print string in reverse
 *
 * @s: an input string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')

		len++;
	while (len)
		putchar(s[--len]);
	putchar('\n');
}
