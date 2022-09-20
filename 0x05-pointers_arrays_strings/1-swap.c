
#include "main.h"
/**
 * swap_int - swaps values of two integers
 *
 * @a: an integer
 *
 * @b: an integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
