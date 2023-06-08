int calc_root(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calc_root(n, 0));
}

/**
 * calc_root - calculate the square root of a number;
 * @root: the square root
 * @n: number to find the square root
 * Return: an in
 */

int calc_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (calc_root(n, root + 1));
}
