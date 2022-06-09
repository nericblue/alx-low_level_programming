#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c);

int main(void)
{
	char word[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
