#include "sort.h"
/**
 *selection_sort - prefor the selection sort alg
 *@array: pointer to array
 *@size: size of array
 */
void selection_sort(int *array, size_t size)
{
	/*Declaratios*/
	unsigned long int  tmp, i = 0, j = 0, min;

	if (array == NULL || size < 2)
		return;
	/*Start comparing values*/
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		} /*end inner for*/
			if (min != i)
			{
				tmp = array[i];
				array[i] = array[min];
				array[min] = tmp;
				print_array(array, size);
			} /*end swap if*/
	} /*end outer for*/
} /*end selectio sort*/
