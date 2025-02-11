#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
if(x==1){
    printf("Not Prime");
}
else if(x==2){
    printf("Prime");
}
else{
    for(int i==2; i<x;i++){
        if(x%i==0){
            printf("Prime");
            break;
        }
        else{
            printf("Not Prime");
        }
    }
}
}