#include <stdio.h>  // Include the standard input-output library

int main() {
    int year;  // Declare an integer variable to store the year input
    printf("Enter the year:- ");  // Prompt the user to enter a year
    scanf("%d", &year);  // Read the year input from the user and store it in the 'year' variable
    
    // Check if the entered year is less than or equal to 0
    if (year <= 0) {
        printf("Invalid Year ");  // If the year is 0 or negative, print an error message
        return 0;  // End the program because the input is invalid
    }
    
    // Check if the year is divisible by 4 (a basic rule to determine a leap year)
    if (year % 4 == 0) {
        // If the year is divisible by 4, it might be a leap year
        printf("The year %d is a leap year...", year);  // Print that the year is a leap year
    } else {
        // If the year is not divisible by 4, it is not a leap year
        printf("The year %d is not a leap year...", year);  // Print that the year is not a leap year
    }
    
    return 0;  // End the program and return 0 to indicate successful execution
}
