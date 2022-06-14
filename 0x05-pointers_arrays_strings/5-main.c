#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[5] = "iwacu";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
