#include <stdio.h>

int main(){
    int Number;
    printf("Enter the no. of which multiplication table's sum you want:- ");
    scanf("%d",&Number);
    if (Number<=0)
    {
        printf("Number Entered by you should be bigger then 0 \n" );
        return 0;
    }
    int sum =0;
    for (int i = 0; i < 10; i++)
    {
        sum += (Number*(i+1));
    }
    printf("The sum of the numbers occurring in the multiplication table of %d is %d",Number,sum);
    return 0;
}