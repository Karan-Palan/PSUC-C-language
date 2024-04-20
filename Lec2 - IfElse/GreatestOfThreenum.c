#include "stdio.h"

int main()
{
    int x, y, z;
    printf("Enter 1st number : ");
    scanf("%d", &x);
    printf("Enter 2st number : ");
    scanf("%d", &y);
    printf("Enter 3st number : ");
    scanf("%d", &z);
    if (x>y && x>z) {
        printf("%d is the greatest", x);
    }
    else if (y>y && y>z) {
        printf("%d is the greatest", y);
    }
    else {
        printf("%d is greatest", z);
    }
    
    return 0;
}