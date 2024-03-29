 #include <stdlib.h>
/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	arr = malloc((size + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	n = min;
	while (n <= max)
	{
		arr[i] = n;
		i++;
		n++;
	}
	return (arr);
}
