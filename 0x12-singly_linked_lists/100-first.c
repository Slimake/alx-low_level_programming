#include <stdio.h>

#define STR "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"

void before_main(void) __attribute__((constructor));
/**
 * before_main - prints a string before the main function
 */
void before_main(void)
{
	printf(STR);
}
