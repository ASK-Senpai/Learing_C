#include <stdio.h>  // Include the Standard Input Output library for printing.
#include <time.h>   // Include the library for working with date and time.

// Define constants for greeting periods.
#define NIGHT_START 0
#define NIGHT_END 3
#define MORNING_START 4
#define MORNING_END 11
#define AFTERNOON_START 12
#define AFTERNOON_END 15
#define EVENING_START 16
#define EVENING_END 23

void greet(int hour) {
    // Array of greetings corresponding to the time periods.
    const char *greetings[] = {"Good Night", "Good Morning", "Good Afternoon", "Good Evening"};
    int index;

    if (hour >= NIGHT_START && hour <= NIGHT_END) {
        index = 0;  // "Good Night"
    } else if (hour >= MORNING_START && hour <= MORNING_END) {
        index = 1;  // "Good Morning"
    } else if (hour >= AFTERNOON_START && hour <= AFTERNOON_END) {
        index = 2;  // "Good Afternoon"
    } else {
        index = 3;  // "Good Evening"
    }

    printf("%s", greetings[index]);  // Print the appropriate greeting.
}

int main() {
    time_t now;  // Variable to store the current time.
    struct tm *local;  // Structure to hold the local time details.

    time(&now);  // Get the current time and store it in 'now'.
    local = localtime(&now);  // Convert 'now' to local time and store it in 'local'.

    int hour_24 = local->tm_hour;  // Extract the current hour (24-hour format).
    
    greet(hour_24);  // Call the 'greet' function with the current hour.
    
    return 0;  // End the program.
}
