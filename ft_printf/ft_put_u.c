
#include "ft_printf.h"

int	ft_put_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_put_u(n / 10);
		count += ft_put_u(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
