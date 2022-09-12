#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a_character;
	int an_integer;
	long a_long;
	long long a_long_long;
	float a_float;

	printf("size of char: %lu byte(s)\n", sizeof(a_character));
	printf("size of an int: %lu byte(s)\n", sizeof(an_integer));
	printf("size of a long : %lu byte(s)\n", sizeof(a_long));
	printf("size of a long long: %lu byte(s)\n", sizeof(a_long_long));
	printf("size of a float: %lu byte(s)\n", sizeof(a_float));

	return (0);

}
