#include <stdio.h>
int main(void)
{
    int a,b=1;
    while(1)
    {
        scanf("%d",&a);
        if (a==0) break;
        else printf("Case %d: %d\n",b,a); 
        b++;
    }

    return 0;
}