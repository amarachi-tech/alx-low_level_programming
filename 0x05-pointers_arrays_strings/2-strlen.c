#include "main.h"
/**
 * _strlen - returns string length
 *
 * @s: An input string
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
