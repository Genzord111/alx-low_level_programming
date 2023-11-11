#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

int format_s(va_list args, char c, int count)
{
	int num_var;
	char *str_var;
	char char_var;

	if (c == 'd')
	{
		num_var = va_arg(args, int);
		count = print_number(num_var, count);
	}
	else if (c == 's')
	{
		str_var = va_arg(args, char *);
		count += print_string(str_var);
	}
	else if (c == 'c')
	{
		char_var = va_arg(args, int);
		count += print_char(char_var);
	}
	else
	{
		char buf[1] = {c};
		count += write(1, buf, 1);
	}
	return count;
}

int print_number(int n, int count)
{
	unsigned int num = n;
	char minus = '-';
	char digit;

	if (n < 0)
	{
		write(1, &minus, 1);
		num = -num;
		count += 1;
	}
	if ((num / 10) != 0)
	{
		count = print_number((num / 10), count);
	}
	digit = (num % 10) + '0';
	write(1, &digit, 1);
	return count + 1;
}

int print_string(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		return i;
	}
	return 0;
}

int print_char(char c)
{
	if (c != NULL)
	{
		write(1, &c, 1);
		return 1;
	}
}

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count = format_s(args, format[i + 1], count);
			i++;
		}
		else
		{
			char buf[1] = {format[i]};
			count += write(1, buf, 1);
		}
		i++;

	}

	va_end(args);

	_putchar('\n');
	return count;
}
