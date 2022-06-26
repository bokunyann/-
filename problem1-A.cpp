#include <stdio.h>

// 引数をとる関数
void bark(int n)
{
    int i;
    for(i=0; i<n; i++) {
        printf("long");
    }
    return;  // 戻り値なし(void)の場合は，省略可．
}

int main(void)
{
    int n;
    printf("n=??");
    scanf("%d", &n);
    bark(n);          //  関数の呼び出し(call) with 引数
    return 0;
}