#include <stdio.h>
int main()
{
    char x[100];
    scanf("%c",&x);
    if(x == 'a'||x =='e'|| x =='i'|| x =='o'|| x =='u'){
        printf("Vowels");
    }
    else if((x>='a' && x<='z') || (x>='A' && x<='Z')){
        printf("Consonant");
    }
    else if(x >='0' && x <='9'){
        printf("Digits");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
