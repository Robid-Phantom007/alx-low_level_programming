#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *  @n: length of diagonal
 *
 *  Return: void
 */
void print_diagonal(int n)
{
	int s, d;

	if (n <= 0)
		_putchar('\n');
	for (s = 0; s < n; s++)
	{
		for (d = 0; d < s; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
