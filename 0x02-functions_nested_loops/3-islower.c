/**
 * _islower - Checks for lower case character
 * Return 1 (Success)
 * Return 0 (Fail)
*/

int _islower(int c)
{
	char ch = 'a';	

	while (ch <= c)
	{
		if (ch == c)
			return 1;
		ch++;
	}
	return 0;
}
