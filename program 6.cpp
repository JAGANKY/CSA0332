#include <stdio.h>
int main() {
    int regNos[100], n, i, searchReg, found = 0;
    printf("Enter number of registration numbers: ");
    scanf("%d", &n);
    printf("Enter %d registration numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &regNos[i]);
    }
    printf("Enter the registration number to search: ");
    scanf("%d", &searchReg);
    for(i = 0; i < n; i++) {
        if(regNos[i] == searchReg) {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Registration number %d found at position %d.\n", searchReg, i + 1);
    else
        printf("Registration number %d not found.\n", searchReg);

    return 0;
}

