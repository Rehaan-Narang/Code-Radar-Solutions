#include <stdio.h>

void checkMSB(int num) {
    if (num & 0x80000000) {
        printf("Set");
    } else {
        printf("Not set");
    }
}

int main() {
    int num;
    
    printf("%d",num);
    scanf("%d", &num);
    
    checkMSB(num);
    
    return 0;
}
