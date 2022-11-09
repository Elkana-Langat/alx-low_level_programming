#include "main.h"

/**
 * _isdigit - checks for a digit(0 through 9)
 *
 * @c: the character to be checked
 *
 * Return: On success 1
 * On failure 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
