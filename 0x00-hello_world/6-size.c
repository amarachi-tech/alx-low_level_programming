#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a_char;
	int b_integer;
	int long_int;
	int long_long_int;
	int a_float;

	printf("size of char: %lu byte(s)" sizeof(a_char));
	printf("size of int: %lu byte(s)" sizeof(b_integer));
	printf("size of long int: %lu byte(s)" sizeof(long_int));
	printf("size of long long int: %lu byte(s)" sizeof(long_long_int));
	printf("size of float: %lu byte(s)" sizeof(a_float));
	return (0);
}
