#include <stdio.h>
int main(void)
{
    double r;
    scanf("%lf", &r);
    double pi=3.141592653589;
    double sur;
    double len;
    sur=pi*r*r;
    len=2*pi*r;
    printf("%lf %lf\n", sur, len);
    return 0;
}