#include <stdio.h>
int main()
{
    char x;
    scanf("%s",&x);
    if(x>=A && x<=Z){
        printf("Uppercase");
    }
    else if(x>=a && x<=z){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}