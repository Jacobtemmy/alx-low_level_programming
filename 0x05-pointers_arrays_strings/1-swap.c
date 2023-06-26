#include "main.h"
/**
 * swap_int - A function to swap integers
 * @a: The first value
 * @b: The second value
 */
void swap_int(int *a, int *b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
}
