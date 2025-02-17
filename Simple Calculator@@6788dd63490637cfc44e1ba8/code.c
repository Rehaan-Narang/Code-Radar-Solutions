#include<stdio.h>
int main()
{
    int x, y;
    char z;
    
    // Read two integers
    scanf("%d %d", &x, &y);
    
    // Clear the input buffer by calling getchar() to consume the newline left by previous scanf
    getchar(); 
    
    // Read the operator
    scanf("%c", &z);  
    
    // Perform the operation based on the operator
    if(z == '+'){
        printf("%d", x + y);
    }
    else if(z == '-'){
        printf("%d", x - y);
    }
    else if(z == '*'){
        printf("%d", x * y);
    }
    else if(z == '/'){
        // To prevent division by zero error
        if (y != 0) {
            printf("%d", x / y);
        } else {
            printf("error");
        }
    }
    else {
        printf("error");
    }

    return 0;
}
