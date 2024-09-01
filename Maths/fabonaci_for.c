#include <stdio.h>
int main()
{
    int n;
    int k = 1;
    int j = 1;
    printf("Enter the index of your Fibonacci series:  ");
    scanf("%d", &n);
    if (n<0||n>47)
    {
        printf("Value must be in range of 0 and 47");
        return 0;
    }
    else if (n==0)
    {
        printf("0");
        return 0;
    }
    else if  (n == 1 || n==2)
    {
        printf("1");
        return 1;
    }
    for (int i = 2; i < n; i++)
    {
        int temp = j;
        j = k+j;
        k = temp;
    }
    printf("Fibonacci number at index %d is: %d\n",n,j);
    return 0;
}