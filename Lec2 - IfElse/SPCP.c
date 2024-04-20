#include "stdio.h"

int main()
{
    int cp;
    printf("Enter cost price");
    scanf("%d", &cp);
    int sp;
    printf("Enter cost price");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("Profit");
    }
    else if (sp == cp)
    {
        printf("Break even");
    }
    else
    {
        printf("Loss");
    }
}