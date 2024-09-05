#include <stdio.h>

// Function to calculate the length of the string manually
int strlen(char str[]) {
    int i = 0;
    
    // Loop through the string until we encounter the null character '\0'
    while (str[i] != '\0') {
        i++;
    }
    return i;  // Return the length of the string (number of characters before '\0')
}

int main() {
    char str[100];  // Declare a character array of size 100 to store the input string
    
    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Use gets() to get the input string from the user
    fgets(str, sizeof(str), stdin);

    // Remove the newline character '\n' if it is present in the string
    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }
    
    // Display the entered string using puts()
    puts(str);
    
    // Call the strlen function and display the length of the string
    printf("The length of the string is %d", strlen(str));
    
    return 0;  // Return 0 to indicate successful execution
}



