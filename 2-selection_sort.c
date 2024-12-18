#include "sort.h"
/**
 * selection_sort - A function that sorts using selection sort algorithm.
 * @array: The integer of an array to sort.
 * @size: The size of an array.
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
        size_t i, j, k;
        int temp;

	if (!array || !size)
	        return;
	for (i = 0; i < size -1; i++)
	{
	        for (j = size -1, k = i + 1; j > i; j--)
	        {
		        if (array[j] < array[k])
			{
			        k = j;
			}
	        }
		if (array[i] > array[k])
		{
		        temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
