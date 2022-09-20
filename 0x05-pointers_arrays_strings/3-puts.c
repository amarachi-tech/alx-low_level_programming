#include <stdio.h>
#include "main.h"

/**
 * _puts - prints out string chatracter
 *
 * @str: strings to print
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while(str[i] !='\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
