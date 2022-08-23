#include <stdio.h>
#include "sort.h"

/**
 * swap - A function that swaps two elements
 * @xp: first element to swap
 * @yp: second element to swap
 * Return: void
 */

void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array we want to print
 * @size: the number of element in the array
 */

void selection_sort(int *array, size_t size)

{
	unsigned long int i, j, main_index;


for (i = 0; i < size - 1; i++)
{

main_index = i;

for (j = i + 1; j < size; j++)
if (array[j] < array[main_index])
main_index = j;


if (main_index != i)
{
swap(&array[main_index], &array[i]);
print_array(array, size);
}
}
}
