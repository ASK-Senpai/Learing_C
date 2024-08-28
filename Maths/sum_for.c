#include <stdio.h>  // This includes the standard input-output library, which allows us to use functions like printf and scanf.

int main() {
    int Num;  // Variable declaration to store the number input by the user.
    int sum_of_nums = 0;  // Variable to accumulate the sum of numbers, initialized to 0.

    // Prompt the user to enter a number until which they want the sum.
    printf("Enter the number until which you want the sum of: ");
    scanf("%d", &Num);  // Read the user's input and store it in the variable 'Num'.

    // Check if the entered number is less than or equal to 0.
    if (Num <= 0) {
        printf("Number entered must be greater than 0 ");  // Print an error message if the number is not positive.
        return 0;  // Exit the program early since the input was invalid.
    }

    // Loop from 0 to Num - 1 (inclusive).
    for (int i = 0; i < Num; i++) {
        sum_of_nums += (i + 1);  // Add the value of (i + 1) to the sum_of_nums. This ensures that we're summing from 1 to Num.
    }

    // Print the calculated sum of numbers.
    printf("Sum of numbers from 1 to %d is %d ", Num, sum_of_nums);

    return 0;  // Return 0 to indicate that the program ended successfully.
}
