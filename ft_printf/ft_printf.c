
#include "ft_printf.h"

static int	check_format(char c, va_list list)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (c == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (c == 'p')
		count += ft_put_p((unsigned long)va_arg(list, void *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		count += ft_put_u(va_arg(list, unsigned int));
	else if (c == 'x')
		count += ft_put_x(va_arg(list, unsigned int));
	else if (c == 'X')
		count += ft_put_upper_x(va_arg(list, unsigned int));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	(args);
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += check_format(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	return (count);
}


int main(){
	char str[] = "hamza";
	int	 x = 4;
	char c = 'v';

	ft_printf(" %d f %%  f %c f %s",x,c,str);
}