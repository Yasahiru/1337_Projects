#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>

int 	ft_putstr(char* str){
	int i = 0;
	while (str[i]){
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c){
	write(1, &c,1);
	return (1);
}

int ft_printf(char* format, ...){
	int total = 0;
	va_list(args);
	va_start(args, format);
	int i = 0;
	if (format[i] == '%'){
		char next = format[i +1];
		if (next == '%'){
			write(1,"%",1);
			return (1);
		}
		else if (next == 's'){
			total += ft_putstr (va_arg(args,char*));
		}
		else if (next == 'c'){
			total += ft_putchar(va_arg(args, int));
		}
		else if (next == 'd'){
			total += ft_putnbr(va_arg(args, int));
		}
	}
	return (total);
}



int main(){
	//int summ = sum(5,1,2,3,4,5);
	//printf("%d",summ);
	char str1[] = "hamza";
	char str2[] = "devoam202";
	int total = ft_printf("%c",'c');
	printf("total: %d",total);
}
