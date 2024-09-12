#include <stdio.h>

int main() {
    int n;
    printf("Enter a number for pattern: ");
    scanf("%d", &n);

    // Upper part of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf(" "); // Print leading spaces
        printf("*"); // Print the first star
        if (i > 0) { // For rows beyond the first one, print spaces and the second star
            for (int j = 0; j < 2 * i - 1; j++) printf(" ");
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    // Lower part of the pattern
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) printf(" "); // Print leading spaces
        printf("*"); // Print the first star
        if (i < n - 1) { // For all but the last row, print spaces and the second star
            for (int j = 0; j < 2 * (n - i - 1) - 1; j++) printf(" ");
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}


