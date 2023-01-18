#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int j = 0;
	char *str;
	char *sep = ", ";

	va_start(list, format);

	while ((format != NULL) && *(format + j) != '\0')
	{
		switch (*(format + j))
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j++;
				continue;
		}
		if (*(format + j + 1) != 0)
		{
			printf("%s", sep);
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
