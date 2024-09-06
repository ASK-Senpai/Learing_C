#include <stdio.h> // Standard input/output library

// Function declaration for swap
void swap(int*, int*); 

// Function definition for swap
// This function swaps the values of two integers using pointers
void swap(int* a, int* b) {
    int temp;   // Temporary variable to store the value of *a
    temp = *a;  // Store the value of *a in temp
    *a = *b;    // Assign the value of *b to *a
    *b = temp;  // Assign the value of temp (old *a) to *b
}

int main() {
    int a; // Variable to store the first number
    int b; // Variable to store the second number

    // Prompt the user to enter the first number
    printf("Enter 1st number to be swapped: "); 
    scanf("%d", &a); // Read the value of the first number

    // Prompt the user to enter the second number
    printf("Enter 2nd number to be swapped: "); 
    scanf("%d", &b); // Read the value of the second number

    // Call the swap function with addresses of a and b
    swap(&a, &b); 

    // Display the numbers after swapping
    printf("1st number after swap: %d \n2nd number after swap: %d", a, b);

    return 0; // Return 0 to indicate successful execution
}













