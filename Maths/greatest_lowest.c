#include <stdio.h>

int main()
{
    int check;
    printf("What do you wanna check? Greatest or smallest??Enter 0 for Greatest enter 1 for smallest:- ");
    scanf("%d",&check);
    if (check!=0 && check!=1)
    {
        printf("You have entered a invaid number pls use 1 or 0 next time...");
        return 0;
    }
    
    int n;
    printf("enter the size of your array:- ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("You have entered a invaid size of array...");
        return 0;
    }

    int Numbers[n];
    int greater,smaller;
    printf("Enter the number to be placed in this array:-");
    scanf("%d", &Numbers[0]);
    greater = Numbers[0];
    smaller = Numbers[0];

    for (int i = 1; i < n; i++)
    {
        printf("Enter the number to be placed in this array:- ");
        scanf("%d", &Numbers[i]);
        if (check==0)
        {
            if (Numbers[i] > greater)
        {
            greater = Numbers[i];
        }
        }
        else if (check==1)
        {
            if (Numbers[i] < smaller)
        {
            smaller = Numbers[i];
        }
        }
        
    }
    
    if (check==0)
    {
       printf("The greatest number you have entered is %d", greater);
    }
    else if (check==1)
    {
        printf("The smallest number you have entered is %d", smaller);
    }

    return 0;
}