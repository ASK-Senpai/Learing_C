#include <stdio.h>
int main() {
    int n;
    // Prompt the user to enter a number for the pattern size
    printf("Enter a number for pattern: ");
    scanf("%d", &n);
    // First part: upper diamond shape
    for (int i = 0; i < n; i++) {
        // Print the left side of the stars
        for (int j = 0; j <= i; j++) 
            printf("*");
        // Print the spaces in between
        if (i != n - 1) // Avoid printing spaces on the last row
            for (int j = 0; j < 2 * (n - 1 - i); j++) 
                printf(" ");
        // Print the right side of the stars
        for (int j = i + 1; j > 0; j--) 
            printf("*");
        // Move to the next line after each row
        printf("\n");
    }
    // Second part: lower inverted diamond shape
    for (int i = 0; i < n; i++) {
        // Print the left side of the stars
        for (int j = 0; j < (n - i); j++) 
            printf("*");
        // Print the spaces in between
        if (i != 0) // Avoid printing spaces on the first row
            for (int j = 0; j < 2 * i; j++) 
                printf(" ");
        // Print the right side of the stars
        for (int j = 0; j < (n - i); j++) 
            printf("*");
        
        // Move to the next line after each row
        printf("\n");
    }
    // Return 0 to indicate successful program termination
    return 0;
}

