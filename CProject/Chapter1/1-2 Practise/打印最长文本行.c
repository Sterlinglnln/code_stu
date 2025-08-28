#include <stdio.h>
#define MAXLINE 1000 // 允许的输入行的最大长度

int get_line(char line[], int maxline); // 函数声明
void copy(char to[], char from[]); // 函数声明

// 打印最长的输入行
int main()
{
    int len; // 当前行的长度
    int max; // 目前为止最长的行的长度
    char line[MAXLINE]; // 当前输入行
    char longest[MAXLINE]; // 目前为止最长的行

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)  // 如果有输入行
        printf("%s", longest);
    return 0;
}

// 读取一行输入，返回长度
int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; // 添加字符串结束符
    return i; // 返回行的长度
}

// 复制字符串 from 到 to
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') // 复制直到字符串结束符
        ++i;
}