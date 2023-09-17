#include "sort.h"
/**
 *quick_sort - performs alg
 *@array: pointer to array
 *@size: arrray size
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_array(array, 0, size - 1, size);
}

/**
 *quick_sort_array - performs alg
 *@array: pointer to array
 *@min: arrray size
 *@last: low index
 *@size: high index
 */

void quick_sort_array(int *array, int min, int last, size_t size)
{
	int pivot;

	if (min < last)
	{
		pivot = partition(array, min, last, size);
		quick_sort_array(array, min, pivot - 1, size);
		quick_sort_array(array, pivot + 1, last, size);
	}
}

/**
 *partition - performs alg
 *@array: pointer to array
 *@min: arrray size
 *@last: low index
 *@size: high index
 *Return: pivot
 */

int partition(int *array, int min, int last, size_t size)
{
	int pivot = array[last];
	int i = min - 1;
	int j;

	for (j = min; j <= last - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[last]);
	if (i + 1 != j)
		print_array(array, size);
	return (i + 1);
}

/**
 *swap - performs alg
 *@a: pointer to array
 *@b: arrray size
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
