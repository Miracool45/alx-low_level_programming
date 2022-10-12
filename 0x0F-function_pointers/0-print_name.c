#include "function_pointers.h"
#include <stddef.h>

/**
 * print name - this function prints a name
 * @name: This is the name to be printed,a char
 * @f: This is a pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
