/**
 * swap_int - swaps the values of two integers
 * @a: a pointer
 * @b: a pointer
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
