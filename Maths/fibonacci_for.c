#include <stdio.h> // Include standard input-output library
int main() // Main function where execution begins
{
    int n; // Variable to store the user input (index of Fibonacci series)
    int k = 1; // Variable to store the (n-2)th Fibonacci number, initialized to 1
    int j = 1; // Variable to store the (n-1)th Fibonacci number, initialized to 1
    // Prompt the user to enter the index for the Fibonacci series
    printf("Enter the index of your Fibonacci series:  "); 
    scanf("%d", &n); // Read the input from the user and store it in variable 'n'
    // Check if the input is within the valid range (0 to 47)
    if (n < 0 || n > 47) 
    {
        printf("Value must be in range of 0 and 47"); // Print an error message if the input is out of range
        return 0; // Exit the program
    }
    // Handle the special case where the input is 0
    else if (n == 0) 
    {
        printf("0"); // The Fibonacci number at index 0 is 0
        return 0; // Exit the program
    }
    // Handle the special case where the input is 1 or 2
    else if (n == 1 || n == 2) 
    {
        printf("1"); // The Fibonacci number at index 1 or 2 is 1
        return 1; // Exit the program
    }
    // Calculate the Fibonacci number for index 'n' using a loop
    for (int i = 2; i < n; i++) 
    {
        int temp = j; // Temporarily store the current (n-1)th Fibonacci number
        j = k + j; // Update 'j' to be the sum of the (n-2)th and (n-1)th Fibonacci numbers
        k = temp; // Update 'k' to be the old (n-1)th Fibonacci number
    }
    // Print the Fibonacci number at the requested index
    printf("Fibonacci number at index %d is: %d\n", n, j); 
    return 0; // Exit the program successfully
}

