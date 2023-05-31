/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;
	int src_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		src_len++;
	}

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	return (dest);
}
