#include <stdio.h>

int main() {
    FILE *file;  // Declare a file pointer
    file = fopen("senpai.txt", "w");  // Open a file named "senpai.txt" in write mode
    
    int num;  // Variable to store the number for the multiplication table
    int c;    // Variable to store the result of the multiplication
    
    // Prompt the user to enter a number
    printf("Enter the number you want the multiplication table of: ");
    // Get the user's input
    scanf("%d", &num); 
    
    // Loop to generate the multiplication table from 1 to 10
    for (int i = 0; i < 10; i++) {
        c = num * (i + 1);  // Calculate the result of num multiplied by (i+1)
        // Write the multiplication result to the file
        fprintf(file, "%d X %d = %d \n", num, (i + 1), c);
    }
    
    fclose(file);  // Close the file after writing is complete
    
    return 0;  // Return 0 to indicate successful execution
}




