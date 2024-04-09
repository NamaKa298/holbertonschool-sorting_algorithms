#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers using the Bubble Sort algorithm
 * @array: The array of integers to be sorted
 * @size: The size of the array
 *
 * Description:
 * This function sorts the array `array` using the Bubble Sort algorithm.
 * Bubble Sort is a simple sorting algorithm that repeatedly steps through
 * the array, compares adjacent elements, and swaps them if they are in the
 * wrong order until the array is fully sorted.
 *
 * Example:
 * int arr[] = {64, 34, 25, 12, 22, 11, 90};
 * size_t n = sizeof(arr) / sizeof(arr[0]);
 * bubble_sort(arr, n);
 *
 * for (int i = 0; i < n; i++)
 *     printf("%d ", arr[i]);
 *
 * Time Complexity:
 * - Best case: O(n), when the array is already sorted.
 * - Worst case: O(n^2), when the array is sorted in reverse order.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, temporaire, indice;

	for (indice = 0 ; indice < size - 1 ; indice++)
	{
		for (i = 0 ; i < size - 1 ; i++)
		{
			if (array[i] > (array[i + 1]))
			{
				temporaire = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temporaire;
				 print_array(array, size);
			}
		}
	}
}
