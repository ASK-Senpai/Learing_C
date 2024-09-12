#include <stdio.h>
int dec_to_Binary(int num){
    int result = 0;
    int rem = 1;
    int pow = 1;
    int cn = num ;
    while (cn > 0)
    {
        rem = cn %2;
        result += (rem*pow);
        pow *= 2;
        cn /=10;
    }
    return result;
}
int main(){
    printf("%d",dec_to_Binary(10));
    return 0;
}