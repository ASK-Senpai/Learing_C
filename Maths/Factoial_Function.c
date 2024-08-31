#include <stdio.h>

// Function to calculate the factorial of a number
// A factorial is the product of all positive integers up to a given number
// For example, factorial of 5 (written as 5!) is 5 * 4 * 3 * 2 * 1 = 120
int factorial(int a)
{
    // If the number is 0 or 1, the factorial is 1 (as 0! = 1 and 1! = 1)
    if (a == 0 || a == 1) {
        return 1;
    }
    // Otherwise, multiply the number by the factorial of the previous number (recursive call)
    return factorial(a - 1) * a;
}

int main(){
    int Num;

    // Prompt the user to enter a number to calculate its factorial
    printf("Enter the number for which factorial you want: ");
    scanf("%d", &Num);

    // Check if the user entered a negative number
    if (Num < 0) {
        printf("Please enter a number greater than or equal to 0.\n");
        return 0; // Exit the program since factorials of negative numbers aren't defined
    }

    // Calculate the factorial of the entered number
    int fact = factorial(Num);

    // Display the result
    printf("The factorial of %d is %d\n", Num, fact);

    return 0; // End of the program
}






