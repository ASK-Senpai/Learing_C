#include <stdio.h>  // Include the standard input/output library

// Function to calculate the Fibonacci number at a given index
int fibonacci(int a) {
    if (a == 1) {  // Base case: if the index is 1, return 0 (first Fibonacci number)
        return 0;
    }
    if (a == 2) {  // Base case: if the index is 2, return 1 (second Fibonacci number)
        return 1;
    }
    
    // Recursive case: return the sum of the two preceding Fibonacci numbers
    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main() {
    int Number;  // Variable to store the user input
    // Prompt the user to enter the index of the desired Fibonacci number
    printf("Enter the index of your Fibonacci series: ");
    scanf("%d", &Number);  // Read the input value

    // Validate the input: check if the index is between 1 and 40
    if (Number <= 0 || Number > 40) {
        printf("Please enter a value between 1 and 40.\n");  // Error message for invalid input
    } else {
        // Print the Fibonacci number at the given index
        printf("Fibonacci number at index %d is: %d\n", Number, fibonacci(Number));
    }

    return 0;  // End of the program
}


