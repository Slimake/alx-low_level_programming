/**
 * set_string - sets the value of a pointer to a char
 * @s: the memory address to set
 * @to: the memory address used to set s
 */

void set_string(char **s, char *to)
{
	*s = to;
}
