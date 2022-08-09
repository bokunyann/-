#include <stdio.h>
int main(void)
{
    int n;
    int a,min,max;
    long long sum;
    scanf("%d %d",&n,&a);
    sum=min=max=a;
    while(--n>0)
    {
        scanf("%d ",&a);
        if(a<min) min=a;
        if(a>max) max=a;
        sum=sum+a;
    }
    printf("%d %d %lld\n",min,max,sum);
    return 0;
}