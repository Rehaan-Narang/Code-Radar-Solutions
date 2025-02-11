#include <stdio.h>
int main()
{
    int binary = 0;
int x;
scanf("%d",&x);
    for(int i=2; i<x;i++){
        if((x%i)==0){
            binary += 1;
            break;
        }
    }

if(binary == 0){
    printf("Prime");
}
else{
    printf("Not Prime");
}
}