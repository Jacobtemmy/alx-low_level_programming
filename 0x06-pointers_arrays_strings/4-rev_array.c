#include "main.h"
/**
 * reverse_array - A function to reverse arrary
 * @a: An integer pointer
 * @n: Number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
