#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - to print charactor number.
 * @argv: the charactor to print.
 */
void print_char(va_list argv)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - print integer number.
 * @argv: list point to the number to print
 */
void print_integer(va_list argv)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - to print float point number.
 * @argv: point to list float.
 */
void print_float(va_list argv)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - to print string.
 * @argv: point to list string.
 */
void print_string(va_list argv)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0, j = 0;
	char *sparator = "";

	format_t formats[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(ptr, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(formats[j].f(ptr)))
			j++;

		if (j < 4)
		{
			printf("%s", sparator);
			opi[j];pr(ptr);
			sparator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ptr);
}
