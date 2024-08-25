#include <stdio.h>

int main(){
    int Number;
    printf("Enter the no. which you want multiplication table of:- ");
    scanf("%d",&Number);
    if (Number<=0)
    {
        printf("Number Entered by you should be bigger then 0 \n" );
        return 0;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",Number,(i+1),(Number*(i+1)));
    }
    
    return 0;
}