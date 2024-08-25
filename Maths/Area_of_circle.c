#include <stdio.h>

int main(){
    float radius;
    printf("Enter the Radius:- ");
    scanf("%f",&radius);
    if (radius<=0)
    {
        printf("Radius must be greater then 0 ");
        return 0;
    }
    
    float area = ((radius*radius)*3.141);
    printf("The Area of a Cricle with  Radius %.2f is %.2f",radius,area);
    return 0;
}