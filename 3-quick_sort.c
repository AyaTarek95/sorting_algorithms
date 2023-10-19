#include "sort.h"
/**
 * My_SwapII- swap 2 ints
 * @array: to swap in
 * @size: of array
 * @x:address of 1st value
 * @y: address of 2nd value
 */
void My_SwapII(int *array, size_t size, int *x, int *y)
{
		if (x != y)
		{
			*x = *x + *y;
			*y = *x - *y;
			*x = *x - *y;
		}
	print_array((const int *)array, size);
}

/**
 * Lomuto_part- Lomuto partition scheme
 * @array: to sort
 * @size: of array
 * @low: lowest index
 * @high: size -1
 * @Return: pivot address
 */
size_t Lomuto_part(int *array, size_t size, size_t low, size_t high)
{
	int x, y, piv;

	piv = array[high];

	for (x = z = low; z < high; z++)

		if (array[z] < piv)
			My_SwapII(array, size, &array[z], &array[x++]);
	My_SwapII(array, size, &array[x], array[high]);
return (x);
}

/**
 * QuickSort- sort via Lomuto partition scheme
 * @array: to sort
 * @size: of arrray
 * @low: lowest point to start
 * @high: size-1
 */
void QuickSort(int *array, size_t size, size_t low, size_t high)
{
	if (low < high)
	{
		size_t P = Lomuto_part(array, size, low, high);

		QuickSort(array, size, low, P - 1);
		QuickSort(array, size, P + 1, high);
	}
}

/**
 * quick_sort- sorts an array of integers
 * @array: to sort
 * @size: of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	QuickSort(array, size, 0, size - 1);
}
