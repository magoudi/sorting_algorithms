#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - krsgnusbfgoiajsgbksng
 * @array: dfknbfbnsfjfvsd
 * @size: sfjkbisfbagbnsnafgk
 * Return: sfjbgkasfbfnkhsgrf
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size < 2)
		return;
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
