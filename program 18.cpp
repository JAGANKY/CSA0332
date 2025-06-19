#include <stdio.h>
int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n < 5) {
        printf("Array has less than 5 elements.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("5th iterated element is: %d\n", arr[4]);
    
    return 0;
}

