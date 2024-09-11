#include <stdio.h> // Include the standard input-output library

int main() {
    int n; // Variable to store the user input number
    
    // Ask the user for input
    printf("Enter a number for pattern: ");
    scanf("%d", &n); // Read the input and store it in 'n'
    
    // Outer loop to control the number of rows
    for (int i = 0; i < n; i++) {
        
        // Inner loop for printing leading spaces before the characters
        for (int j = 0; j < (n - i - 1); j++) {
            printf(" ");
        }

        // Loop for printing the increasing characters (A, B, C...) on the left side
        for (int j = 0; j < i + 1; j++) {
            printf("%c", j + 65); // Convert the number to its corresponding uppercase letter
        }

        // Loop for printing the decreasing characters (A, B, C...) on the right side
        for (int j = i; j > 0; j--) {
            printf("%c", (j - 1) + 65); // Convert the number to its corresponding uppercase letter
        }

        // Move to the next line after each row
        printf("\n");
    }
    
    return 0; // Return 0 to indicate successful program termination
}


