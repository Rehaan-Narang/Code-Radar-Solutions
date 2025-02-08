#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(z==+){
        printf("%d",x+y);
    }
    else if(z==-){
        printf("%d",x-y);
    }
    else if(z==*){
        printf("%d",x*y);
    }
    else(z==/){
        printf("%d",x/y);
    }
}