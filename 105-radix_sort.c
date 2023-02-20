#include "sort.h"
/**
* max_val - gets max value from array
* @array: pointer to array
* @size: size of array
* Return: the max value from the array
*/
int max_val(int *array, size_t size)
{
	int max = array[0];
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
