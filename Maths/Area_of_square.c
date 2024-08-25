#include <stdio.h>
#include <math.h>

double Calculate_area(int a){
return pow(a,2);
}

int main(){
    double side;
    printf("Enter the length of side of a square:- ");
    scanf("%lf",&side);
    double area = Calculate_area(side);
    printf("Area of the square with side %.2lf is %.2lf",side,area);
    return 0;
}