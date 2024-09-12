#include <stdio.h>
int dec_to_Binary(int num){
    int result = 0;
    int rem = 1;
    int pow = 1;
    while (num > 0)
    {
        rem = num %2;
        result += (rem*pow);
        pow *=10;
        num /=2;
    }
    return result;
}
int main(){
    printf("%d",dec_to_Binary(10));
    return 0;
}