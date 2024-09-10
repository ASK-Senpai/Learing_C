#include <stdio.h>
#include <stdlib.h>

// Function to either encrypt or decrypt a string by shifting each character by 'key' value
void encrypt_decrypt(char *str, int key)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] += key;  // Shift each character by the given key
    }
}

// Function to calculate the size of the file by counting characters
int get_file_size(FILE *file)
{
    int size = 0;
    while (fgetc(file) != EOF)  // Read character by character until the end of file
        size++;  // Increment size for each character
    rewind(file);  // Reset file pointer to the beginning for further operations
    return size;
}

// Function to read the file content into a string
void read_file(char *str, int size, FILE *file)
{
    fread(str, sizeof(char), size, file);  // Read 'size' number of characters from the file into 'str'
    str[size] = '\0';  // Null-terminate the string
}

// Function to write the modified string back to the file
void write_file(const char *str, FILE *file)
{
    fputs(str, file);  // Write the string to the file
}

int main()
{
    // Open the file in read/write mode
    FILE *file = fopen("senpai.txt", "r+");
    if (!file)
    {
        perror("Error opening file");  // If file can't be opened, show error message
        return 1;
    }

    // Get the size of the file
    int n = get_file_size(file);
    if (n <= 0)
    {
        printf("File is empty. Write something in the file.\n");
        fclose(file);  // Close the file if empty and exit the program
        return 0;
    }

    // Allocate memory for the string to hold the file content
    char *str = (char *)malloc(n + 1);
    read_file(str, n, file);  // Read the content of the file into 'str'
    
    int choice;
    printf("Enter 0 to encrypt or 1 to decrypt: ");
    scanf("%d", &choice);  // Get user's choice for encryption or decryption

    // Based on user input, either encrypt or decrypt the string
    if (choice == 0)
        encrypt_decrypt(str, 99);  // Encrypt by shifting characters by +99
    else if (choice == 1)
        encrypt_decrypt(str, -99);  // Decrypt by shifting characters by -99
    else
    {
        printf("Invalid input\n");
        free(str);  // Free allocated memory and exit if the input is invalid
        fclose(file);
        return 0;
    }

    // Move file pointer back to the beginning before writing the modified string
    rewind(file);
    write_file(str, file);  // Write the encrypted/decrypted string back to the file
    printf("Resulting string:\n%s\n", str);  // Print the resulting string to the console

    // Free the allocated memory and close the file
    free(str);
    fclose(file);
    return 0;
}
