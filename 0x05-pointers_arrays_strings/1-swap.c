/**
 * swap_int - swaps the value of two integers
 * @a: parameter a
 * @b: parameter b
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	int temp2 = *b;
	*b = temp;
	*a = temp2;
}

