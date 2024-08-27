#include <stdio.h> // Include the standard input-output library for using printf() and scanf()

int main() {
    int Num; // Variable to store the number entered by the user

    // Ask the user to input a number
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &Num); // Read the user's input and store it in the variable 'Num'

    // Check if the number is less than or equal to 1
    // Prime numbers are greater than 1, so numbers <= 1 are not prime
    if (Num <= 1) {
        printf("Not prime\n"); // If the number is <= 1, it's not prime
        return 0; // End the program early since the check is complete
    }

    // Special cases: 2 and 3 are the smallest prime numbers
    // If the number is 2 or 3, we can directly declare it as prime
    if (Num == 2 || Num == 3) {
        printf("Is Prime\n"); // Print that the number is prime
        return 0; // End the program early since no further checks are needed
    }

    // Now, we check if the number is divisible by any number from 2 up to the square root of 'Num'
    // If 'Num' is divisible by any number in this range, it is not prime
    // We use i * i <= Num because if a number has a factor larger than its square root,
    // it must also have a smaller factor, so checking up to the square root is enough
    for (int i = 2; i * i <= Num; i++) {
        // If 'Num' is divisible by 'i', it means 'Num' is not a prime number
        if (Num % i == 0) {
            printf("Is Not Prime\n"); // Print that the number is not prime
            return 0; // End the program early since we found a factor
        }
    }

    // If no factors were found, the number is prime
    printf("Is Prime\n"); // Print that the number is prime

    return 0; // End the program
}
