#include <stdio.h>

// 统计输入的字符数
int main()
{
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc) 
    ;
        // 每次读取一个字符，计数器加1
    printf("num = %.0f\n", nc);  // 输出当前字符数
    return 0;  // 返回0表示程序正常结束
}