#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    printf("Average: %.2f",(x+y+z)%3);
    return 0;
}