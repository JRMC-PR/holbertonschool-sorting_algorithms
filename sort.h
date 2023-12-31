#ifndef sort_h
#define sort_h
#include <stdio.h>
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
/*Function signatures*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
size_t lomuto_partition(int *array, size_t low, size_t high);
void quick_sort(int *array, size_t size);
int partition(int *array, int min, int last, size_t size);
void swap(int *a, int *b);
void quick_sort_array(int *array, int min, int last, size_t size);
#endif
