#include <stdio.h>

int main(){
    float radius,height;
    printf("Enter the Radius:- ");
    scanf("%f",&radius);
    printf("Enter the Height:- ");
    scanf("%f",&height);
    if (radius<=0||height<=0)
    {
        printf("Radius and Height must be greater then 0 ");
        return 0;
    }
    float area = ((radius*radius)*3.141*height);
    printf("The Volume of a Cylinder with Radius %.2f and Height %.2f is %.2f",radius,height,area);
    return 0;
}