#include "main.h"

/**
 * print_string - print the word "_putchar"
 *
 * Return: Always return 0
 */
int print_string(void)
{
	char a[] = "_putchar";

	int len = 8;
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');

	return (0);
}
