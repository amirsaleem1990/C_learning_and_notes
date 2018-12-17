#include <stdio.h>
struct date
{
        int d,m,y;
        };
void main()
{
        struct date today;
        printf("Enter Date");
        scanf("%d%d%d", &today.d, &today.m, &today.y);
        printf("%d/%d/%d", today.d, today.m, today.y);
}

