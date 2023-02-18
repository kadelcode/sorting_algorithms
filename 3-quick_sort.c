#include "sort.h"
/**
* swap - the positions of two elements into an array
* @array: the array
* @item1: array element
* @item2: array element
*/
void swap(int *array, ssize_t item, ssize_t item2)
{
	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}
/**
* lomuto_partition - lomuto partition sorting scheme implementation
* @array: array
* @first: first array element
* @last: last array element
* @size: size of array
* Return: return the position of the last element sorted
*/
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pivot = array[last];
	ssize_t current = first, finder;

	for (finder = first finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		swap(array, current, last);
		print_array(array, size);
	}
	return (currrent);
}
