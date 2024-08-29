// using ASCII Table
#include <stdio.h>  // Include the standard input-output library

int main() {
    char character;  // Declare a variable to store the input character
    printf("Enter a Character:- ");  // Prompt the user to enter a character
    scanf("%c", &character);  // Read the character input from the user and store it in 'character'
    
    int counter = character;  // Convert the character to its ASCII value and store it in 'counter'
    
    // Check if the ASCII value is between 65 and 90 (inclusive), which corresponds to uppercase letters
    if (counter >= 65 && counter <= 90) {
        printf("You have entered an uppercase letter.\n");  // Output that the user entered an uppercase letter
    }
    // Check if the ASCII value is between 97 and 122 (inclusive), which corresponds to lowercase letters
    else if (counter >= 97 && counter <= 122) {
        printf("You have entered a lowercase letter.\n");  // Output that the user entered a lowercase letter
    }
    // If the ASCII value is not in the range of uppercase or lowercase letters
    else {
        printf("You have entered an invalid character.\n");  // Output that the user entered an invalid character
    }
    
    return 0;  // End the program and return 0 to indicate successful execution
}


