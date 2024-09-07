#include <stdio.h>
// Function to check if a given integer is a palindrome
int isPalindrome(int num) {
    int rem = 0;  // Variable to store the reversed digits of 'num'
    
    // Loop to reverse half of the number (while 'num' is greater than 'rem')
    while (num > rem) {
        // Append the last digit of 'num' to 'rem'
        rem = (rem * 10) + (num % 10);
        // Remove the last digit from 'num'
        num /= 10;
    }
    
    // Return true if the original number equals its reverse
    // or if it equals the reverse without the last digit (in case of odd length)
    return (num == rem || num == (rem / 10));
}
int main() {
    int num;  // Variable to store the user-input number
    
    // Ask the user to enter a number
    printf("Enter a number to check if it is Palindrome: ");
    // Read the number provided by the user
    scanf("%d", &num);
    
    // Check if the number is a palindrome and print the result
    if (isPalindrome(num)) {
        printf("The number is a Palindrome...");
    } else {
        printf("The number is not a Palindrome...");
    }
    
    return 0;  // Indicate that the program finished successfully
}




