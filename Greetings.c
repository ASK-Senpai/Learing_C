#include <stdio.h>
#include <time.h>
void greet(int hour)
{
    if (hour>=0 && hour<4)
    {
       printf("Good Night");
    }
    else if (hour>=4 && hour<12)
    {
        printf("Good Moring");
    }
    else if (hour>=12 && hour<16)
    {
        printf("Good Afternoon");
    }
    else if (hour>=16 && hour<= 23)
    {
        printf("Good Evening");
    }
    
}

int main(){
    time_t now;
    struct tm *local;
    time(&now);             
    local = localtime(&now);  
    int hour_24 = local->tm_hour;
    greet(hour_24);
    return 0;
}