#include "sort.h"
/**
 *bubble_sort -  sorts an array of integers
 *@array: ints array
 *@size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t x, z;

	if (!array || !size)
		return;

	x = 0;

	while (x < size)
	{
		for (z = 0; z < size - 1; z++)
		{
			if (array[z] > array[z + 1])
			{
				tmp = array[z];
				array[z] = array[z + 1];
				array[z + 1] = tmp;
				print_array(array, size);
			}
		}
		z++;
	}

}
