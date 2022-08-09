#include<stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    int num[101];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d ",&num[i]);
    }
    if(N>=1) printf("%d",num[N-1]);
    for(i=N-2;i>=0;i--)
    {
        printf(" %d",num[i]);
    }
    printf("\n");
    return 0;
}