#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name- this functions prints a name
 * @name: string to print
 * @f:parameter function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
