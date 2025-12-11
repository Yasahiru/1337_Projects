
#include "ft_printf.h"

int	ft_put_x(unsigned int n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_put_x(n / 16);
		count += ft_put_x(n % 16);
	}
	else
		count += ft_putchar(hex[n]);
	return (count);
}

int	ft_put_X(unsigned int n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_put_upper_x(n / 16);
		count += ft_put_upper_x(n % 16);
	}
	else
		count += ft_putchar(hex[n]);
	return (count);
}
