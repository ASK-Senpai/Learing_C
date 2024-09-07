#include <stdio.h>

// Function to reverse the digits of a given integer
int reverse_int(int num) {
    int rem = 0;  // Variable to store the reversed number
    // Loop until all digits are processed
    while (num > 0) {
        // Take the last digit of 'num' and append it to 'rem'
        rem = (rem * 10) + (num % 10);
        // Remove the last digit from 'num'
        num /= 10;
    }
    // Return the reversed number
    return rem;
}

int main() {
    int num, reversed;  // Variables to store the input number and its reverse
    
    // Ask the user to enter a number
    printf("Enter a number to reverse it: ");
    // Read the number from user input
    scanf("%d", &num);
    
    // Display the original number before reversing
    printf("The number before reverse: %d \n", num);
    
    // Call the function to reverse the number and store the result in 'reversed'
    reversed = reverse_int(num);
    
    // Display the reversed number
    printf("The number after reverse: %d \n", reversed);
    
    return 0;  // Indicate successful program termination
}






