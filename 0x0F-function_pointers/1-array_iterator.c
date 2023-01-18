#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given on an array with elements
 * @array: array with the parameters
 * @size: the size of an array
 * @action: function as a parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
