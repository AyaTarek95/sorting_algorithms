#include "sort.h"
/**
 * My_SwapII- swap 2 ints
 * @size: of array
 * @x:address of 1st value
 * @y: address of 2nd value
 */
void My_SwapII(int *array, size_t size, int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;

print_array((const int *)array, size);
}

/**
 * Lomuto_part- Lomuto partition scheme
 * @array: to sort
 * @size: of array
 * @low: lowest index
 * @high: size -1
 * Return: pivot
 */
size_t Lomuto_part(int *array, size_t size, size_t low, size_t high)
{
	int x, z, pivot_value = array[high];

	x = z = low;
	for (x = z = low; z < high; z++)
	{
		if (array[z] < pivot_value)
			My_SwapII(array, size, &array[z], &array[x++]);
		
	}
	My_SwapII(array, size, &array[x], &array[high]);
return (x);
}

/**
 * QuickSort_recursion- sort via Lomuto partition
 * @array: to sort
 * @size: size of array
 * @low: lowest point to start
 * @high: size-1
 */
void QuickSort_recursion(int *array, size_t size,  size_t low, size_t high)
{
	if (low < high)
	{
		size_t P_index = Lomuto_part(array, size, low, high);

		QuickSort_recursion(array, size, low, P_index - 1);
		QuickSort_recursion(array, size, P_index + 1, high);
	}
}

/**
 * quick_sort- sort array of ints
 * @array: to sort
 * @size: of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	QuickSort_recursion(array, size, 0, size - 1);
}
