#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int Computers_no = (rand() % 100) + 1;
    int Player_no=0;
    int Guess_count = 0;
    for (int Player_no; Player_no != Computers_no;)
    {
        printf("Enter a Number to guess...\n");
        scanf("%d",&Player_no);
        if (Player_no < Computers_no)
        {
            printf("Wrong Guess,Guess a bigger no...\n");
            Guess_count++;
            continue;
        }
        else if (Player_no > Computers_no)
        {
            printf("Wrong Guess,Guess a smaller no...\n");
            Guess_count++;
            continue;
        }
        else if (Player_no == Computers_no)
        {
            printf("Congrats You won,\n No of wrong guesses is %d", Guess_count);
            return 0;
        }
    }
return 0;
}