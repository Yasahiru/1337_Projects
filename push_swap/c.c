// #include "push_swap.h"

// void	ft_sort_value(char **arr)
// {
// 	int		i;
// 	int		checker;
// 	char	*tmp;

// 	i = 0;
// 	checker = 1;
// 	while (checker)
// 	{
// 		checker = 0;
// 		i = 0;
// 		while (arr[i + 1])
// 		{
// 			if (ft_atoi(arr[i]) < ft_atoi(arr[i + 1]))
// 			{
// 				tmp = arr[i];
// 				arr[i] = arr[i + 1];
// 				arr[i + 1] = tmp;
// 				checker = 1;
// 			}
// 			i++;
// 		}
// 	}
// }

// int main(void)
// {
//     char    **arr;
//     int     i;

//     arr = ft_split("5 1 7 8 3 9", ' ');
//     if (!arr)
//         return (1);

//     printf("Before sort:\n");
//     i = 0;
//     while (arr[i])
//     {
//         printf("%s ", arr[i]);
//         i++;
//     }
//     printf("\n");

//     ft_sort_value(arr);

//     printf("After sort:\n");
//     i = 0;
//     while (arr[i])
//     {
//         printf("%s ", arr[i]);
//         i++;
//     }
//     printf("\n");

//     // free memory
//     i = 0;
//     while (arr[i])
//     {
//         free(arr[i]);
//         i++;
//     }
//     free(arr);

//     return (0);
// }