#include <stdio.h>
#include <stdlib.h>
// Function to generate multiplication tables for 'n' numbers
void Make_Tables(int arr[], int n) {
    int index = 0; // Initialize index to keep track of position in the array
    int *table = (int *)malloc(n * sizeof(int)); // Dynamically allocate memory for 'n' numbers
    // Loop to get each number for which the multiplication table is required
    for (int i = 0; i < n; i++) {
        printf("Enter the multiplication table you want for number %d: ", i + 1);
        scanf("%d", &table[i]);
        // Generate the multiplication table for the current number
        for (int j = 0; j < 10; j++) {
            arr[index] = table[i] * (j + 1); // Store the result in the array
            index++; // Move to the next position in the array
        }
    }
    free(table); // Free the dynamically allocated memory
}
// Function to print the generated multiplication tables
void Print_Table(int arr[], int n) {
    for (int i = 0; i < n * 10; i++) { // Loop through the entire array
        if ((i + 1) % 10 == 0) { // Check if it's the end of a table
            printf("%d\n", arr[i]); // Print the last number of the current table and move to the next line
            continue;
        }
        printf("%d ", arr[i]); // Print the current number in the table
    }
}
int main() {
    int n;
    printf("Enter how many tables you want: "); // Prompt user to enter the number of tables
    scanf("%d", &n);
    // Check if the entered number of tables is valid
    if (n <= 0) {
        printf("The number of tables must be greater than 0...");
        return 0; // Exit the program if the input is invalid
    }
    // Dynamically allocate memory to store all the tables
    int *arr = (int *)malloc((n * 10) * sizeof(int));
    Make_Tables(arr, n); // Call function to generate the tables
    Print_Table(arr, n); // Call function to print the tables
    free(arr); // Free the dynamically allocated memory
    return 0;
}

