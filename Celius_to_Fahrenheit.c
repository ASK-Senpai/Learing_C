#include <stdio.h>

int main(){
    float celcius;
    printf("Enter Celcius:- ");
    scanf("%f",&celcius);
    float Fahrenheit = ((celcius*(9.0/5.0))+32);
    printf("Fahrenheit of Celcius %.2f degree is %.2f",celcius,Fahrenheit);
    return 0;
}