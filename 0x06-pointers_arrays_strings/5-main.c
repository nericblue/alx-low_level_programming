#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "My name is Eric.\n";
	char *p;

	p = string_toupper(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
