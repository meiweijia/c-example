#include <stdio.h>

int main()
{
    char str;
    printf("输入字符:");
    scanf("%c", &str);
    printf("%c 的ASCII码是: %d\n", str, str);
    return 0;
}