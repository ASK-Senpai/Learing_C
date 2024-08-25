#include <stdio.h>

int main(){\
    int Num;
    int sum_of_nums=0;
    printf("Enter the number until which you want sum of:- ");
    scanf("%d",&Num);
    if (Num<=0)
    {
        printf("Number entered must be bigger then 0 ");
        return 0;
    }
    int i;
    // for (int i = 0; i<Num; i++)
    // {
    //     sum_of_nums += (i+1);
    // }
    do
    {
        sum_of_nums += (i+1);
        i++;
    } while (i<Num);
    
    printf("Sum of numbers from 0 to %d is %d ",Num,sum_of_nums);
    return 0;
}