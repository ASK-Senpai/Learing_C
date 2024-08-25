#include <stdio.h>

int main(){
    int Number;
    printf("Enter the no. which you want  reverse multiplication table of:- ");
    scanf("%d",&Number);
    if (Number<=0)
    {
        printf("Number Entered by you should be bigger then 0 \n" );
        return 0;
    }
    
    for (int i = 10; i > 0; i--)
    {
        printf("%d X %d = %d\n",Number,(i),(Number*(i)));
    }
    
    return 0;
}