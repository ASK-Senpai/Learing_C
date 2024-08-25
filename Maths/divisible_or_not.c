#include <stdio.h>

int main(){
    int number1,number2;
    printf("Enter you want to check divisibility of:- ");
    scanf("%d",&number1);
    printf("Enter the number that is checked to be divisible with 1st number:- ");
    scanf("%d",&number2);
    if (number1%number2==0)
    {
        printf("The numbers are divisible");
    }
    else
    printf("The numbers are not divisible");
    return 0;
}