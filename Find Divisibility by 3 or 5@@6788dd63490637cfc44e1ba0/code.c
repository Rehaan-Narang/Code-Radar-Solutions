#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0 && y%5==0){
        printf("Divisible by 5");
    }
    else if(x%3==0){
        printf("Divisible by 3");
    }
    else if(x%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }
}