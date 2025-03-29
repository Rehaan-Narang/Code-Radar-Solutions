#include<stdio.h>
int mian()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n*10;i++){
        printf("%d * %d = %d",n,i,n*i);

    }
}