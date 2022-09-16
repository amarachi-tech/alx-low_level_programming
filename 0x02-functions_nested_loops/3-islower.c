
#include "main.h"
/**
 * _islower - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On Success 1
 *
 * On erro, -1 is returned, and errno is set appropriately
 */

int _islower(int c)
{
	char i;
	int j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (j == c)

			return (1);

	}
	return (0);
}
