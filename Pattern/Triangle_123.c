#include <stdio.h> // Include standard input-output library

int main() {
    int n; // Variable to store the user input number
    
    // Ask the user for input
    printf("Enter a number for pattern: ");
    scanf("%d", &n); // Read the input and store it in 'n'
    
    // Outer loop to control the rows
    for (int i = 0; i < n; i++) {
        
        // Inner loop for printing leading spaces
        for (int j = 0; j < (n - i - 1); j++) {
            printf(" ");
        }

        // Loop for printing the increasing numbers on the left side
        for (int j = 0; j < i + 1; j++) {
            printf("%d", j + 1);
        }

        // Loop for printing the decreasing numbers on the right side
        for (int j = i; j > 0; j--) {
            printf("%d", j);
        }

        // Move to the next line after each row
        printf("\n");
    }
    
    return 0; // Exit the program
}


