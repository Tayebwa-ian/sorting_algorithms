#include "sort.h"


/**
 *swap - swaps two elements in a list
 *@first: the index first element
 *@second: the index of second element
 *@array: the array
 *Return: void
 */
void swap(int array[], int first, int second)
{
	int temp = array[first];

	array[first] = array[second];
	array[second] = temp;
}

/**
 *bubble_sort - sort an array using buubble sort method
 *@array: the array to sort
 *@size: size of the array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, new_size, n;

	if (size < 2)
	{
		return;
	}

	n = size;
	while (1)
	{
		new_size = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(array, i - 1, i);
				new_size = i;
				print_array(array, size);
			}
		}
		n = new_size;
		if (n <= 1)
			break;
	}
}
