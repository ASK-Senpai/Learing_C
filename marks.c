#include <stdio.h>

int main(){
    int marks1,marks2,marks3;
    printf("Enter your marks in science:- ");
    scanf("%d",&marks1);
    printf("Enter your marks in Maths:- ");
    scanf("%d",&marks2);
    printf("Enter your marks in English:- ");
    scanf("%d",&marks3);
    int avg_of_marks = (marks1+marks2+marks3)/3;
    if (avg_of_marks>=40)
    {
        if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
        {
            printf("You are Passed");
        }
        else
        printf("You are failed due to less marks in one of your subjects");
    }
    else
    printf("You are failed due to less percentage");
    
    return 0;
}