#include <stdio.h>
#include "push_swap.h"

int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countSort(int arr[], int n, int exp) {
    int output[n]; 
    int count[10] = {0};
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n) {
  
    int m = getMax(arr, n); 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// int main() {
// 	printf("%d ", 5 >> 0 & 1); // 101
//     return (0);
// }

// int main(){
//     t_stack *a = create_stack_a(ft_split("2 5 1 9 0", ' '));
// 	t_stack *b = NULL;
//     int i = 0;
// 	while (i < ft_lstsize(a))
//     {
//         if ((a->value) >> i & 1)
//             ra(&a);
//         else
//             pb(&a, &b);
//         a = a->next;
//     }

//     while (b)
//     {
//         printf("%d ", b->value);
//         b = b->next;
//     }
    
// }