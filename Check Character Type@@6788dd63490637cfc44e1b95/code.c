#include <stdio.h>
int main()
{
    char x[100];
    scanf("%d",&x);
    if(char == 'a'||char =='e'|| char =='i'|| char =='o'|| char =='u'){
        printf("Vowels");
    }
    else if((char>='a' && char<='z') || (char>='A' && char<='Z')){
        printf("Consonant");
    }
    else if(char >='1' && char<='9'){
        printf("Digits");
    }
    else{
        printf("Special Character");
    }
}
