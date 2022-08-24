#ifndef HEADER
#define HEADER


#include <stdio.h>
#include <stdlib.h>
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



void insertion_sort_list(listint_t **list);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *xp, int *yp);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort_r(int *array, int lower, int higher, size_t size);
void quickSort(int arr[], int low, int high);
void quick_sort_r(int *array, int lower, int higher, size_t size);
int partition(int *array, int lower, int higher, size_t size);

#endif /* HEADER */
