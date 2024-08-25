#include <stdio.h>

int factorial(int a)
{
    if (a == 0 || a == 1) {
        return 1;
    }
    return factorial(a-1)*a;
}

int main(){
    int Num;
    printf("Enter the no. of which Factorial you want:- ");
    scanf("%d",&Num);
     if (Num<0)
    {
        printf("Number Entered by you should be bigger then 0 \n" );
        return 0;
    }
    int fact = factorial(Num);
    printf("Fatorial of %d is %d",Num,fact);
    return 0;
}