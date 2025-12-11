#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_putptr(n / 16);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_put_p(unsigned long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putptr(ptr);
	return (count);
}
