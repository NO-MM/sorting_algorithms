#include "sort.h"
/**
 * swap - A function that swaps 2 int values.
 * @array: The integer of an array to sort.
 * @size: The size of an array.
 * @a: The address of a first value.
 * @b: The address of a second value.
 *
 * Return: void
 */
void swap(int *array, size_t size, int *a, int *b)
{
        if (*a != *b)
	{
	        *a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - A funtion that partitions the array.
 * @array: The integer array to be sorted.
 * @size: The size of the array.
 * @lo: The low index of the sort range.
 * @hi: The high index of the sort range.
 *
 * Return: size_t
 */
size_t lomuto_partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
        int i, j, pivot = array[hi];

	for (i = j = lo; j < hi; j++)
	        if (array[j] < pivot)
	                swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[hi]);

	return (i);
}

/**
 * quick_sort - A function that quicksorts via lomuto partitioning scheme.
 * @array: The integer array to be sorted.
 * @size: The size of the array.
 * @lo: The low index of the sort range.
 * @hi: The high index of the sort range.
 *
 * Return: void
 */
void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
        if (lo < hi)
	{
	        size_t p = lomuto_partition(array, size, lo, hi);

		quicksort(array, size, lo, p - 1);
		quicksort(array, size, p + 1, hi);
	}
}

/**
 * quick_sort - A function that calls quicksort.
 * @array: The integer array to be sorted.
 * @size: The size of the array.
 *
 * Return: void
 */
void quick_sort(int * array, size_t size)
{
       if (!array || !size)
	       return;
       quicksort(array, size, 0, size - 1);
}
