#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j;

	while (i < 3)
{
		j = 0;
		while (j < 3)
		{
		printf("%d ", j);
		j++;
		}
	printf("\n");
		i++;
}
	return (0);
}
