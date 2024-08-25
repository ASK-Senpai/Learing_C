#include <stdio.h>

int main(){
    int Num;
    printf("Enter a no. to check if it is prime:- ");
    scanf("%d",&Num);
    int Prime=1;
    int i=2;
    if (Num<=0)
    {
        printf("Enter a Number which is greater then zero");
        return 0;
    }
    else if (Num==1)
    {
        printf("Not prime");
        return 0;
    }
    else if (Num==2)
    {
        printf("Is Prime");
        return 0;
    }
    else if (Num==3)
    {
        printf("Is Prime");
        return 0;
    }

    do
    {
        if (Num%i==0)
        {
            Prime=0;
        }
        i++;
    } while (i*i<=Num);
    
    if (Prime==0)
    {
        printf("Is Not Prime");
    }
    else if (Prime==1)
    {
        printf("Is Prime");
    }
    
    
    
    
    return 0;
}