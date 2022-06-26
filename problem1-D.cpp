#include <stdio.h>

int main(void)
{
    int a,h,c,min,sec;
    scanf("%d", &a);
    h=a/3600;
    c=a%3600;
    min=c/60;
    sec=c%60;
    printf("%d:%d:%d\n", h, min, sec);
    return 0;
}