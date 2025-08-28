#include <stdio.h>

// 统计输入的行数
int main()
{
    int c, nl;

    nl = 0; // 初始化行计数器,读取字符直到遇到EOF
    while ((c = getchar()) != EOF) 
    {
        if (c == '\n') 
        {
            ++nl; // 如果是换行符,行计数器加1
    printf("%d\n", nl); // 输出当前行数
        }
    }
}