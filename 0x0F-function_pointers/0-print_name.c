#include "function_pointers.h"

/**
 * print_name - To prints a name.
 * @name: To indicate the name to be printed.
 * @f: Indicate a pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
