#include <stdio.h>

int main(){
    int Number;
    printf("Enter the no. of which Factorial you want:- ");
    scanf("%d",&Number);
    int factorial=1;
    int i;
   if (Number<0)
    {
        printf("Number Entered by you should be bigger then 0 \n" );
        return 0;
    }
    else if (Number==0 || Number == 1)
    {
    printf("The Factorial is 1");
    return 0;
    }
    do
    {
        factorial *= (i+1);
        i++;
    } while (i<Number);
    
    printf("The Factorial of %d is %d",Number,factorial);
    return 0;
}