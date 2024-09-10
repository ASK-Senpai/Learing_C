#include <stdio.h>
#include <stdlib.h>

void encrypt_decrypt(char *str, int key)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] += key;
    }
}

int get_file_size(FILE *file)
{
    int size = 0;
    while (fgetc(file) != EOF)
        size++;
    rewind(file);
    return size;
}

void read_file(char *str, int size, FILE *file)
{
    fread(str, sizeof(char), size, file);
    str[size] = '\0';
}

void write_file(const char *str, FILE *file)
{
    fputs(str, file);
}

int main()
{
    FILE *file = fopen("senpai.txt", "r+");
    if (!file)
    {
        perror("Error opening file");
        return 1;
    }

    int n = get_file_size(file);
    if (n <= 0)
    {
        printf("File is empty. Write something in the file.\n");
        fclose(file);
        return 0;
    }

    char *str = (char *)malloc(n + 1);
    read_file(str, n, file);
    
    int choice;
    printf("Enter 0 to encrypt or 1 to decrypt: ");
    scanf("%d", &choice);

    if (choice == 0)
        encrypt_decrypt(str, 99);
    else if (choice == 1)
        encrypt_decrypt(str, -99);
    else
    {
        printf("Invalid input\n");
        free(str);
        fclose(file);
        return 0;
    }

    rewind(file);
    write_file(str, file);
    printf("Resulting string:\n%s\n", str);

    free(str);
    fclose(file);
    return 0;
}
