#include <stdio.h>

int main()
{
    float a, b;
    printf("输入两个数:");
    scanf("%f %f", &a, &b);
    printf("%f x %f = %.2f\n", a, b, a * b);
    return 0;
}