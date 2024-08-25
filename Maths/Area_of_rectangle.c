// basic code to get Area of a rectangle
#include <stdio.h>

int main(){
    float Length,Breath;
    printf("Enter length the Length of rectangle:- ");
    scanf("%f",&Length);
    printf("Enter length the Breath of rectangle:- ");
    scanf("%f",&Breath);
    if (Length<=0 || Breath<=0)
    {
        printf("Length and Breath must be greater then 0 ");
        return 0;
    }
    float Area = Length*Breath;
    printf("The area of a retangle with length %.2f and breath %.2f is %.2f",Length,Breath,Area);
    return 0;
}