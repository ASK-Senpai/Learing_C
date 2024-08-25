#include <stdio.h>

int main(){
    int princple,rate_of_interest,time;
    printf("Enter the Principle amount:- ");
    scanf("%d",&princple);
    printf("Enter the Rate of interest:- ");
    scanf("%d",&rate_of_interest);
    printf("Enter the Time period:- ");
    scanf("%d",&time);
    if (princple<=0)
    {
        printf("Princple amount must be greater then 0 ");
        return 0;
    }
    int Simple_Interest = ((princple*rate_of_interest*time)/100);
    printf("The Simple Interest for your amount is %d",Simple_Interest);
    return 0;
}