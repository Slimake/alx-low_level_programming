#include <stdlib.h>

int get_s1Len(char *s1);
int get_s2Len(char *s2, unsigned int n);

/**
 * string_nconcat - concatenates two strings
 * @s1: the destination memory address
 * @s2: the source memory address
 * @n: number of bytes from src
 * Return: the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* allocate memory */
	str = malloc(sizeof(char) * get_s1Len(s1) * get_s2Len(s2, n));

	/* check if memory allocation was successful */
	if (str == NULL)
		return (NULL);

	/* concat s1 to str */
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	/* concat s2 to str */
	j = 0;
	while (j < get_s2Len(s2, n))
	{
		str[i + j] = s2[j];
		j++;
	}

	str[i + j] = '\0';
	return (str);
}

/**
 * get_s1Len - get the length of s1
 * @s1: the memory address
 * Return: the length of the memory address
 */

int get_s1Len(char *s1)
{
	int i;
	int s1_len = 0;

	i = 0;
	while (s1[i] != '\0')
	{
		s1_len++;
		i++;
	}

	return (s1_len);
}

/**
 * get_s2Len - get the length of s2
 * @s2: the memory address
 * @n: the number of bytes
 * Return: the length of the memory address
 */

int get_s2Len(char *s2, unsigned int n)
{
	unsigned int i;
	int s2_len = 0;

	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s2_len++;
		i++;
	}

	return (s2_len);
}
