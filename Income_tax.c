#include <stdio.h>

int main(){
    int income;
    float tax =0;
    printf("Enter Your yearly Income:- ");
    scanf("%d",&income);
    if (income<=0)
    {
        printf("Income must be greater then 0 ");
        return 0;
    }
    if (income<=250000)
    {
       tax = 0;
    }
    else if (income<=500000)
    {
        tax = (income-250000)*0.05;
    }
    else if (income<=1000000)
    {
        tax = 250000*0.05 + (income - 500000)*0.2;
    }
    else{
    tax = 250000*0.05 + 500000*0.2 + (income-1000000)*0.3;}
    printf("Your tax to be paid %.2f",tax);
    return 0;
}