#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 *
 * @separator: The string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}

		printf("%s", str);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

}
