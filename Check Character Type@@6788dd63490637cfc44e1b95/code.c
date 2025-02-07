#include <stdio.h>
int main()
{
    char x;
    scanf("%s",&x);
    if(x==a,e,i,o,u){
        printf("Vowel");
    }
    else if(x==b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x){
        printf("consonant");
    }
    else if(x==!,@,#,$,%,^,&,*,_,+,=){
        printf("Special Character");
    }
    else{
        printf("Digit");
    }
}