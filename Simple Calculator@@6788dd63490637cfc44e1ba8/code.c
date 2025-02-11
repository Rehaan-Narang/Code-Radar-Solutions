#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c", &a,&b , &c);
    //method 1 = switch case
    if(c=='/' && b!=0){
        printf("%d", a/b);
    }
    else{
    switch(c){
        case'+': printf("%d", a+b);
        break;
        case '-': printf("%d", a-b);
        break;
        case '*': printf("%d", a*b);
        break;
        default: printf("error");
    }
    }

//method 2 = if else

    // if(c=='+'){
    //     printf("%d", a+b);
    // }
    // else if(c=='-'){
    //     printf("%d", a-b);
    // }
    // else if(c=='*'){
    //     printf("%d", a*b);
    // }
    // else if(c=='/' && b!=0){
    //     printf("%d", a/b);
    // }
    // else{
    //     printf("error");
    // }
}
