#include <stdio.h>

void checkMSB(int num) {
    // 0x80000000 = 10000000 00000000 00000000 00000000 in binary (MSB set)
    if (num & 0x80000000) {
        printf("MSB is set (1)\n");
    } else {
        printf("MSB is not set (0)\n");
    }
}

int main() {
    int num;
    
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    
    checkMSB(num);
    
    return 0;
}
