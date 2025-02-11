#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c", &a,&b , &c);
    // switch(c){
    //     case'+': printf("%d", a+b);
    //     break;
    //     case '-': printf("%d", a-b);
    //     break;
    //     case '*': printf("%d", a*b);
    //     break;
    //     case '/': printf("%d", a/b);
    //     break;
    //     default: printf("error");
    // }

    if(c=='+'){
        printf("%d", a+b);
    }
    else if(c=='-'){
        printf("%d", a-b);
    }
    else if(c=='*'){
        printf("%d", a*b);
    }
    else if(c=='/' && b!=0){
        printf("%d", a/b);
    }
    else{
        printf("error");
    }
}
