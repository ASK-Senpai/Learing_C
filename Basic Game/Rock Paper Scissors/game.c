#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 2 to represent the computer's choice
    // 0 for Rock, 1 for Paper, 2 for Scissors
    int computerChoice = rand() % 3;
    
    // Variable to store the player's choice
    int playerChoice;

    // Display the game instructions to the player
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose your option:\n");
    printf("0 for Rock\n");
    printf("1 for Paper\n");
    printf("2 for Scissors\n");
    printf("Enter your choice: ");
    
    // Get the player's choice from input
    scanf("%d", &playerChoice);

    // Validate player input to ensure it's within the valid range (0, 1, or 2)
    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1; // Exit the program with an error code
    }

    // Array to store the string representation of the choices
    const char *choices[] = {"Rock", "Paper", "Scissors"};

    // Display the player's choice
    printf("You chose: %s\n", choices[playerChoice]);
    
    // Display the computer's choice
    printf("Computer chose: %s\n", choices[computerChoice]);

    // Determine the result of the game
    if (playerChoice == computerChoice) {
        // If both choices are the same, it's a tie
        printf("It's a tie!\n");
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        // Player wins in these conditions
        printf("You won!\n");
    } else {
        // If none of the winning conditions are met, the player loses
        printf("You lost!\n");
    }

    // Exit the program successfully
    return 0;
}
