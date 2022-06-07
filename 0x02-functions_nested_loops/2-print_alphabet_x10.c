#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char a2z, co;

	co = 0;

	while (co < 10)
	{
		for (a2z = 'a'; a2z <= 'z'; a2z++)
		{
			_putchar (a2z);
		}
		co++;
		_putchar('\n');
	}
}
