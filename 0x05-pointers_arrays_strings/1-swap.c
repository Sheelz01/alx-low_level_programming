#include "main.h"

/**
*sawp_int -swaps two integers'values
*@n: first integer
:@b: second integer
*return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
