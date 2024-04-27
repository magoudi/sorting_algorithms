#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - wjgnvfgviugvkjnsbfnghbvsfgsdh
 * @array: sfjnvasbfgnasghdbvnm
 * @size: asfnbgasghbjnakhfgb
 * Return:gsnfgjvndkfjbgnkjdfkng
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int min;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		if (array[i] == min)
			continue;
		array[index] = array[i];
		array[i] = min;
		print_array(array, size);
	}
}
