#include <stdio.h>
int main()
{
    int binary = 0;
int x;
scanf("%d",&x);
if(x==1){
    printf("Not Prime");
}
else if(x==2){
    printf("Prime");
}
else{
    for(int i=2; i<x;i++){
        if((x%i)==0){
            binary += 1;
            break;
        }
    }
}
if(binary == 0){
    printf("Prime");
}
else{
    printf("Not prime");
}
}