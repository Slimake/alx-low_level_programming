/**
 * _strncat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * @n: parameter variable
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
