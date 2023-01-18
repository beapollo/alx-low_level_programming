#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches integer
 * @array: array with parameters
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of an element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
