#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: concatenated string s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int s1_len = 0;
	int s2_len = 0;

	/* get length for s1 */
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	/* compute the length of s2 */
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	/* allocate memory to str dynamically */
	str = malloc((sizeof(char) * s1_len) + (s2_len + 1));

	if (str == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	/* copy s1 and s2 to str */
	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];

	j = 0;
	while (i <= (s1_len + s2_len))
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	return (str);
}
