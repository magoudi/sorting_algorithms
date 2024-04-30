#include <stdio.h>
#include "sort.h"

/**
 * lomuto - skfhgahfbsajfbgfndkfbhd
 * @array: jdfgonbakjsbrgsfjkbg
 * @low: dfgrg
 * @high: adsgarsg
 * Return: werjfgnjbdg
 */

void lomuto(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i1 = low - 1;
	int tmp;
	int i;

	if ((high - low) == 1)
		return;
	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			i1++;
			if (array[i] == array[i1])
				continue;
			if (array[i] < array[i1])
			{
				tmp = array[i];
				array[i] = array[i1];
				array[i1] = tmp;
				print_array(array, size);
			}
		}
	}
	i1++;
	if (array[high] != array[i1])
	{
		tmp = array[high];
		array[high] = array[i1];
		array[i1] = tmp;
		print_array(array, size);
	}
	if (i1 > low)
		lomuto(array, low, i1 - 1, size);
	if (i1 < high)
		lomuto(array, i1 + 1, high, size);
}

/**
 * quick_sort - ljfbgfasbfhsbdjfgbhksdf
 * @array: djfngkbbjgvbf.ksajhbknf
 * @size: sfbkamsbfknkjfbjasdfbj
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lomuto(array, 0, size - 1, size);
}
