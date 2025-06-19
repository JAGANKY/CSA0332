#include <stdio.h>
int main() {
    int arr[100], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEven numbers in the array:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\nOdd numbers in the array:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    return 0;
}

