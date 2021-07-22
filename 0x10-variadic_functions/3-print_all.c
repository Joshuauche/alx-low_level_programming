#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: format parameter
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i;
	char *str, *sep = "";

	i = 0;
	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;

				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}

	}
	va_end(arg);
	printf("\n");
}

