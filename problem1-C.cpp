#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d",&a, &b);
    int sur, len;
    sur=a*b;
    len=2*a+2*b;
    printf("%d %d", sur,len);
    return 0;
}