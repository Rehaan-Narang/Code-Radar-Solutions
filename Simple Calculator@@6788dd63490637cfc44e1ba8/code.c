#include <stdio.h>
int main()
{
    int x,y;
    char z[100];
    scanf("%d %d %d",&x,&y,&z);
    if(z=='+'){
        printf("%d",x+y);
    }
    else if(z=='-'){
        printf("%d",x-y);
    }
    else if(z=='*'){
        printf("%d",x*y);
    }
    else {
        printf("%d",x/y);
    }
}