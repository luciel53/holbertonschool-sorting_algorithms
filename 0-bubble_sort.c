#include <stdio.h>
#include <stdlib.h>
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
 * bubble_sort - A function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: the array we want to print
 * @size: the number of element in the array
 */
void bubble_sort(int *array, size_t size)

{
unsigned long int i, j;

if (array == NULL)
return;

for (i = 0; i < size - 1; i++)


for (j = 0; j < size - i - 1; j++)
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
}
}




