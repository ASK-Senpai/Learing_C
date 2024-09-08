#include <stdio.h>

// Function to count the number of digits in a number
int count(int num) {
    int cnt = 0;
    while (num > 0) {
        cnt++;
        num /= 10;
    }
    return cnt;
}

// Function to calculate base^power using fast exponentiation
int poweris(int base, int power) {
    int result = 1;
    while (power > 0) {
        if (power % 2 == 1) result *= base;  // If power is odd, multiply the base
        base *= base;                        // Square the base
        power /= 2;                          // Reduce the power
    }
    return result;
}

// Function to check if a number is an Armstrong number
int isArmStrong(int num) {
    int n = num, rem = 0, power = count(num);
    while (n > 0) {
        rem += poweris(n % 10, power);  // Add each digit raised to the power of digit count
        n /= 10;
    }
    return (rem == num);  // Return true if sum equals the original number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an Armstrong number and print result
    printf("Number is %s Armstrong number.", isArmStrong(num) ? "an" : "not an");
    return 0;
}



