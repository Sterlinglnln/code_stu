#include <stdio.h>

// 将输入复制到输出
int main()
 {
    int c;

    // 读取字符直到文件结束
    while ((c = getchar()) != EOF) 
    {
        putchar(c); // 输出读取的字符
    }

    return 0;
}