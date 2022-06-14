#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char s1[98];
	char *p;

	p = _strcpy(s1, "First things first, and then solve the code.\n");
	printf("%s", s1);
	printf("%s", p);
	return (0);
}
