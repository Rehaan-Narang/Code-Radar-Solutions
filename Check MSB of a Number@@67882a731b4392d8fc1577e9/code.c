#include <stdio.h>

void checkMSB(int num) {
    if (num & 0x80000000) {
        printf("Set");
    } else {
        printf("Not Set");
    }
}

int main() {
    int num;
    
    printf("");
    scanf("%d", &num);
    
    checkMSB(num);
    
    return 0;
}
