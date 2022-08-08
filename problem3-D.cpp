#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int i,div=0;
    for(i=a; i<=b; i++)
    {
        if(c%i==0) div=div+1;
        else div=div+0;
    }
    printf("%d\n",div);
    return 0;
}