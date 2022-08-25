#include "sort.h"

/**
  * quick_sort - a function that sorts an array of integers in ascending
  * order using the Quick sort algorithm
  * @array: the array to print
  * @size: size of the array
  * Return: void
  */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quick_sort_r(array, 0, size - 1, size);
}

/**
  * quick_sort_r - quick sort recursion
  * @array: the array to print
  * @low: the first part
  * @high: the second part
  * @size: size of the array
  * Return: void
  */

void quick_sort_r(int *array, int low, int high, size_t size)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_r(array, low, pivot - 1, size);
		quick_sort_r(array, pivot + 1, high, size);
	}
}

/**
  * partition - a function that divides an array in two partitions
  * @array: the array
  * @low: first part
  * @high: second part
  * @size: the size
  * Return: void
  */

int partition(int *array, int low, int high, size_t size)
{
int i = low;
int j = high;
int pivot = array[high];

for (j = low; j < high; j++)
{
if (array[j] <= pivot)
		{
swap(&array[i], &array[j]);

if (i != j)
print_array(array, size);
++i;
		}
	}
swap(&array[i], &array[high]);
if (i != j)
print_array(array, size);

	return (i);
}

/**
 * swap - A function to swap two elements
 * @xp: first element
 * @yp: second element
 * Return: void
 */

void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
