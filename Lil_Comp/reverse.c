#include <stdio.h>
#include <stdlib.h>
void printarr(int a,int arr[]){
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
void reverse(int a,int arr[]){\
    int temp;
    for (int i = 0; i < a/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[a-i-1];
        arr[a-i-1] = temp;
    }
}
int main(){
    int n;
    printf("Enter the size of the array:- ");
    scanf("%D",&n);
    if (n<=0)
    {
        printf("Size of an array must be bigger then 0...");
        return 0;
    }
    int* arr =(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d :- ",i);
        scanf("%d",&arr[i]);
    }
    printarr(n,arr);
    reverse(n,arr);
    printarr(n,arr);
    free(arr);
    return 0;
}