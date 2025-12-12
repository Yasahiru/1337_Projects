#include "ft_printf.h"

int	ft_putchar(char c){
	write(1, &c,1);
	return (1);
}

// int main(){
// 	int count = ft_putchar('v');
// 	printf("%d",count);
// }