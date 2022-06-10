#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int ab, ba;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ab = 1; ab <= size; ab++)
		{
			_putchar('#');
			for (ba = 2; ba <= size; ba++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
