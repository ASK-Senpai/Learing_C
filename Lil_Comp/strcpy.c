#include <stdio.h>
#include <string.h>  // Include for using strlen function
// Custom function to copy a string from str1 to str2
char strcpy2(char str2[], char str1[]) {
    int i = 0;
    // Loop through each character of str1 until the null terminator '\0' is encountered
    while (str1[i] != '\0') {
        str2[i] = str1[i];  // Copy each character from str1 to str2
        i++;
    }
    str2[i] = '\0';  // Add the null terminator at the end of the copied string
}
int main() {
    char str[100];  // Declare a character array to store the input string
    char str2[99];  // Declare another array to hold the copied string
    printf("Enter a string:- ");
    // Read a string from the user input, including spaces, using fgets
    fgets(str, sizeof(str), stdin);
    // Remove the newline character '\n' if it is present at the end of the string
    int length = strlen(str);  // Calculate the length of the input string
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';  // Replace the newline with a null terminator
    }
    // Print the original string (String 1)
    printf("String 1:- ");
    puts(str);  // Output the original string
    // Copy the contents of str to str2 using the custom strcpy2 function
    strcpy2(str2, str);
    // Print the copied string (String 2)
    printf("String 2:- ");
    puts(str2);  // Output the copied string

    return 0;  // Return 0 to indicate successful execution
}


