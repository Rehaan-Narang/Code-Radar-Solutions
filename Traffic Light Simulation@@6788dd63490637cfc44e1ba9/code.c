#include<stdio.h>
int main()
{
    char d;
    scanf("%c",&d);
    if(d=='R'){
        printf("Stop");
    }
    else if(d=='G'){
        printf("Go");
    }
    else {
        printf("Slow Down");
    }
    // char x;
    // scanf("%c",&x);
    // if(x=='R'){
    //     printf("Stop");
    // }
    // else if(x=='G'){
    //     printf("Go");
    // }
    // else if(x=='Y'){
    //     printf("Slow Down");
    // }
    // else{
        // printf("Invalid input");
    }
}