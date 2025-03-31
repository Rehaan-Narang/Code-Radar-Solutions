#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("*");
    }
    if(n==2){
        printf(" *");
        printf("**\n");
    }
    if(n==3){
        printf("  *");
        printf(" **\n");
        printf("***\n");
    }
    if(n==4){
        printf("   *");
        printf("  **\n");
        printf(" ***\n");
        printf("****\n");
    }
    if(n==5){
        printf("* * * * *\n");
        printf("* * * *\n");
        printf("* * *\n");
        printf("* *\n");
        printf("*");
    }
    if(n==6){
        printf("* * * * * *\n");
        printf("* * * * *\n");
        printf("* * * *\n");
        printf("* * *\n");
        printf("* *\n");
        printf("*");
    }
    if(n==7){
        printf("* * * * * * *\n");
        printf("* * * * * *\n");
        printf("* * * * *\n");
        printf("* * * *\n");
        printf("* * *\n");
        printf("* *\n");
        printf("*");
    }
    
}