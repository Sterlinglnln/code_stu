#include <stdio.h>
#define lim 100 // 定义一个常量lim，表示字符串的最大长度
int main() {
    int i, c;
    char s[lim];

    //改写以下代码，不使用&&或者||：for (i = 0; i < lim-1 && (c = getchar()) != '\n' && c != EOF; ++i) s[i] = c;
    for (i = 0; i < lim - 1; ++i) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        if (c == EOF) {
            break;
        }
        s[i] = c;
    }
    s[i] = '\0'; // 添加字符串结束符

    printf("Input string: %s\n", s);
    return 0;
}