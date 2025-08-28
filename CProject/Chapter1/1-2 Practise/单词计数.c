#include <stdio.h>

#define IN 1 // 在单词内
#define OUT 0 // 在单词外

// 统计输入的行数、单词数和字符数
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) 
    {
        nc++; // 每读取一个字符，字符数加1

        if (c == '\n') 
            nl++; // 每读取一个换行符，行数加1

        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT; // 遇到空格、换行或制表符，状态为OUT
        else if (state == OUT) 
        {
            state = IN; // 遇到非空格字符，状态为IN
            nw++; // 单词数加1
        }
    }
    printf("%d %d %d\n", nl, nw, nc); // 输出行数、单词数和字符数
}