
#include "main.h"
/**
 * rev_string - function to reverse a string
 *
 * @s: input string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		temp = s[i];
		s[i++] = s[len];
		s[len] = temp;
	}
}
