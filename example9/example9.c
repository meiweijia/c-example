#include <stdio.h>

int main()
{
    int a, b;
    printf("输入两个数:");
    scanf("%d %d", &a, &b);
    printf("商 %d\n", a / b);
    printf("余 %d\n", a % b);
    return 0;
}