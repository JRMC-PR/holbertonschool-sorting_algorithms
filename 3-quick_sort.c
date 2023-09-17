#include "sort.h"
/**
 *quick_sort - performs alg
 *@array: pointer to array
 *@size: arrray size
 */
void quick_sort(int *array, size_t size) {
	if (size <= 1) {
		return;
	}

	/*Partition the array around the pivot element.*/
	size_t pivot_index = lomuto_partition(array, 0, size - 1);

	/*Recursively sort the two subarrays.*/
	
	print_array(array, size);
	quick_sort(array, pivot_index);
	quick_sort(array + pivot_index + 1, size - pivot_index - 1);
}

/**
 *lomuto_partition - performs the partition
 *@array: array pointer 
 *@low: index smaller than pivot
 *@high: pivot
 */
size_t lomuto_partition(int *array, size_t low, size_t high) {
	/*Choose the last element as the pivot.*/
	int pivot = array[high];
	/*Initialize the index of the element that is smaller than the pivot.*/
	size_t i = low - 1;
	/*Iterate over the array from the left, starting at the first element.*/
	for (size_t j = low; j < high; j++) {
		/*If the current element is smaller than the pivot, swap it with the
		 *  element at the current index and then increment the current index.*/
		if (array[j] < pivot) {
			i++;
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	/* Swap the pivot element with the element at the current index.*/
	int tmp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = tmp;
	/*Return the index of the pivot element.*/
	return i + 1;
}

