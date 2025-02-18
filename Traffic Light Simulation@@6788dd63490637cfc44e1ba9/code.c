#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='R'){
        printf("Stop");
    }
    else if(c=='G'){
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