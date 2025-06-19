#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidString(char str[]) {
    int i;
    if (strlen(str) == 0)
        return 0; // Empty string is invalid

    for (i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) // Check if not an alphabet
            return 0;
    }
    return 1; // Valid string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isValidString(str))
        printf("Valid string (only alphabets).\n");
    else
        printf("Invalid string.\n");

    return 0;
}

