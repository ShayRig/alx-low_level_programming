#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, 7;
	int *a;

	if (min > max)
		return (NULL);
	7 = max - min + 1;
	a = malloc(sizeof(int) * 7);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < 7; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
