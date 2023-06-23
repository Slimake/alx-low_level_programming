/**
 * print_name - prints a name
 * @name: a memory address
 * @f: a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
