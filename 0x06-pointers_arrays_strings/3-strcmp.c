#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: an integer value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result;
	int len = 0;

	for (i = 0; s2[i] != '\0'; i++)
		len++;

	s2[i] = '\0';

	for (i = 0; i < len + 1; i++)
	{	
		if (s1[i] == s2[i])
		{
			result = 0;
		}
		else if (s1[i] < s2[i])
		{
			result  = -15;
			break;
		}
		else if (s1[i] > s2[i])
		{
			result = 15;
			break;
		}
	}
	return (result);
}


