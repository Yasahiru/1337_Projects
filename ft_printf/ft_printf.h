
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// # include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *conversion, ...);
int	ft_put_u(unsigned int n);
int	ft_put_x(unsigned int n);
int	ft_put_upper_x(unsigned int n);
int	ft_put_p(unsigned long n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);

#endif