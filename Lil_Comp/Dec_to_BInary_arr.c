#include <stdio.h>
int size_of_arr(int num)
{
    int cn = num;
    int count = 0;
    while (cn > 0)
    {
        cn /= 2;
        count++;
    }
    return count;
}
void dec_to_binary(int num, int arr[], int size)
{
    int counter = 0;
    int binary = 0;
    int i = 0;
    int cn = num;
    int temp =0;
    while (cn > 0)
    {
        arr[size-1-i] = cn % 2;
        cn /= 2;
        i++;
    }
}
int main()
{
    int num = 10;
    int size = size_of_arr(num);
    int arr[size];
    dec_to_binary(num, arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}