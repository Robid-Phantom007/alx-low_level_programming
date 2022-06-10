#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int aa, ab, ac;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ab = 0; ab <= (size - 1); ab++)
		{
			for (aa = 0; aa < (size - 1) - ab; aa++)
			{
				_putchar(' ');
			}
			for (ac = 0; ac <= ab; ac++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
