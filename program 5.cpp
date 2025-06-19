#include <stdio.h>

int main() {
    int list1[100], list2[100], mergedList[200];
    int n1, n2, i, j;
    printf("Enter size of first list: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first list:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &list1[i]);
    printf("Enter size of second list: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second list:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &list2[i]);
    for(i = 0; i < n1; i++)
        mergedList[i] = list1[i];
    for(j = 0; j < n2; j++)
        mergedList[i + j] = list2[j];
    printf("Merged list:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", mergedList[i]);

    return 0;
}

