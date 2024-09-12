#include <stdio.h>
int fact(int num){
    int pro=1;
    for (int i = 1; i <= num; i++)
    {
        pro *= i;
    }
    return pro;
}
float nCr(int n,int r){
    float nCr = fact(n)/(fact(r)*fact((n-r)));
    return nCr;
}
int main(){
    printf("%.2f",nCr(6,3));
    return 0;
}