#include "sort.h"
/**
 *bubble_sort - sort an array using bubble methd
 *@array: points to an array
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	/*Declarations*/
	long unsigned int i = 0, tmp, j = 0, count;
	/*check inputs*/
	if (array == NULL || size < 2)
		return;
	/*sort the array using bubble method*/
	for (i = 0; i < size - 1; i++)
	{
			count = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			/*pefor the switch*/
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				count++;
				print_array(array, size); /*print array*/
			} /*end if*/
		} /*end inner for*/
		if (count == 0)
			break;
	} /*end for*/
}
/*end bubble sort*/

