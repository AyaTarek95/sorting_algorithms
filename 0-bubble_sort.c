#include "sort.h"
/**
 *bubble_sort -  sorts an array of integers
 *@array: ints array
 *@size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t x, y;

	if (!array || !size)
		return;

	x = 0;

	while (i < size)
	{
		for (z = 0; z < size - 1; z++)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}

}
