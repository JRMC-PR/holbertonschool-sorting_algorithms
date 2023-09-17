#include "sort.h"
/**
 *quick_sort - performs alg
 *@array: pointer to array
 *@size: arrray size
 */
void quick_sort(int *array, size_t size)
{
	/*validate size*/
	if (size < 2)
		return;
	quick_sort_array(array, 0, size - 1, size);
} /*end quick sort*/

/**
 *quick_sort_array - performs alg
 *@array: pointer to array
 *@min: arrray size
 *@last: low index
 *@size: high index
 */

void quick_sort_array(int *array, int min, int last, size_t size)
{
	/*Declaratios*/
	int pivot;
	/*check vales*/
	if (min < last)
	{
		pivot = partition(array, min, last, size);
		quick_sort_array(array, min, pivot - 1, size);
		quick_sort_array(array, pivot + 1, last, size);
	} /*end if */
} /*end quick sort array*/

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
	/*Declaratios*/
	int pivot = array[last];
	int i = min - 1;
	int j;
	/*travers the partitio*/
	for (j = min; j <= last - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		} /*end if*/
	} /*end for*/
	swap(&array[i + 1], &array[last]);
	if (i + 1 != j)
		print_array(array, size);
	return (i + 1);
} /*end partition*/

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
} /*end swap*/
