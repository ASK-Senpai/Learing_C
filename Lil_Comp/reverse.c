#include <stdio.h>
#include <stdlib.h>
// Function to print the elements of the array
void printarr(int a, int arr[]) {
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);  // Print each element of the array
    }
    printf("\n");  // Print a newline after printing all elements
}
// Function to reverse the elements of the array
void reverse(int a, int arr[]) {
    int temp;  // Temporary variable for swapping
    for (int i = 0; i < a / 2; i++) {  // Iterate over half of the array
        temp = arr[i];  // Store the current element in temp
        arr[i] = arr[a - i - 1];  // Assign the corresponding element from the end of the array
        arr[a - i - 1] = temp;  // Assign temp to the corresponding element at the end
    }
}
int main() {
    int n;  // Variable to store the size of the array
    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);  // Corrected the format specifier to %d
    // Check if the size of the array is greater than 0
    if (n <= 0) {
        printf("Size of an array must be greater than 0...\n");
        return 0;  // Exit the program if the size is invalid
    }
    // Dynamically allocate memory for the array
    int* arr = (int*)malloc(n * sizeof(int));
    // Loop to get input values for each element of the array
    for (int i = 0; i < n; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);  // Store the input value in the array
    }
    // Print the original array
    printarr(n, arr);
    // Reverse the array
    reverse(n, arr);
    // Print the reversed array
    printarr(n, arr);
    // Free the allocated memory
    free(arr);\
    return 0;  // Return 0 to indicate successful execution
}
