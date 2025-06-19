#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, next;
    int sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        sum += a;
        next = a + b;
        a = b;
        b = next;
    }
    printf("\nSum of Fibonacci Series: %d\n", sum);
    return 0;
}

