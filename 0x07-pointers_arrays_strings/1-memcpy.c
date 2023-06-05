/**
 * _memcpy - copies memory area
 * @dest: the memory address to print
 * @src: the memory address to copy
 * @n: n bytes to copy from src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
