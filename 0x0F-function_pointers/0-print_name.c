#include "function_pointers.h"
/**
 * print_name - function
 * @name: name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}