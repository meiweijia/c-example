#include <stdio.h>

int main()
{
    int a, b;
    printf("输入a:");
    scanf("%d", &a);
    printf("输入b:");
    scanf("%d", &b);
    a > b ? printf("a > b") : printf("a < b");
    return 0;
}