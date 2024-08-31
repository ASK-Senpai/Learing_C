#include <stdio.h>

int main() {
    int Number;
    int factorial = 1; // Initialize the factorial result to 1

    // Prompt the user to enter a number
    printf("Enter the number for which factorial you want: ");
    scanf("%d", &Number);

    // Check if the number is negative
    if (Number < 0) {
        // Factorials are not defined for negative numbers
        printf("Please enter a number greater than or equal to 0.\n");
        return 0; // Exit the program
    }
    // Check if the number is 0 or 1
    else if (Number == 0 || Number == 1) {
        // The factorial of 0 or 1 is 1
        printf("The factorial is 1\n");
        return 0; // Exit the program
    }

    // Calculate the factorial using a loop
    for (int i = 0; i < Number; i++) {
        // Multiply the current value of factorial by (i+1)
        factorial *= (i + 1);
    }

    // Display the result
    printf("The factorial of %d is %d\n", Number, factorial);

    return 0; // End of the program
}
