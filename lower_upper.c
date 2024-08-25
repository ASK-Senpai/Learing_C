// using ASCII Table
#include <stdio.h>

int main(){
    char character;
    printf("Enter a Character:- ");
    scanf("%c",&character);
    int counter = character;
    if (counter >=65 && counter <=90)
    {
        printf("You have entered an uppercase");
    }
    else if (counter >= 97 && counter <= 122 )
    {
        printf("You have entered an lowercase");
    }
    else
        printf("You have entered an invaild character");
    
    return 0;
}

// using lib