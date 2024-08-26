#include <stdio.h> // This is a preprocessor directive to include the standard input-output library in C.
//It allows you to use functions like printf and scanf.

int main() { // This is the main function, where the execution of the program begins.
    int Number; // We are declaring an integer variable 'Number' which will store the number entered by the user.
    
    // Prompt the user to enter the number they want the multiplication table for.
    printf("Enter the number for which you want the multiplication table: ");
    
    // Accept user input and store it in the 'Number' variable.
    scanf("%d", &Number); // The '%d' format specifier is used to read an integer value.

    // Check if the number entered is less than or equal to 0.
    if (Number <= 0) {
        // If the number is less than or equal to 0, display a message and exit the program.
        printf("The number should be greater than 0.\n");
        return 0; // The return statement ends the program if the number is not valid.
    }
    
    // Loop from 0 to 9 (which gives 10 iterations) to generate the multiplication table.
    for (int i = 0; i < 10; i++) {
        // In each iteration, display the multiplication result in the format: Number X (i + 1) = Result
        // (i + 1) gives numbers from 1 to 10, and the result is calculated as Number * (i + 1).
        printf("%d X %d = %d\n", Number, (i + 1), (Number * (i + 1)));
    }
    
    return 0; // The return statement signifies successful execution of the program.
}
