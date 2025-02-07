#include <stdio.h>

void checkMSB(int num) {
    // 0x80000000 = 10000000 00000000 00000000 00000000 in binary (MSB set)
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
