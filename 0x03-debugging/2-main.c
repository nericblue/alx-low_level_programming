#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;

	a = 3;
	b = 0;
	c = 7;
	d = largest_number(a, b, c);
	printf("%d is the largest number\n", d);
	return (0);
}
