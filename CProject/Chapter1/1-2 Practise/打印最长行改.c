#include <stdio.h>

#define MAXLINE 1000  // 允许的输入行的最大长度
int max;              // 当前找到的最长行的长度
char line[MAXLINE];  // 当前的输入行
char longest[MAXLINE];  // 存储最长行

int get_line(void);
void copy(void);

// 打印最长的输入行
int main(){
    int len;
    extern int max;  // 引用外部变量max
    extern char longest[];  // 引用外部数组longest

    max = 0;  // 初始化最长行长度为0
    while ((len = get_line()) > 0) {  // 获取输入行
        if (len > max)   // 如果当前行长度大于已知最长行长度
            max = len;  // 更新最长行长度
            copy();  // 复制当前行到最长行
    }
    if (max > 0)  // 如果有输入行
        printf("%s", longest);  // 打印最长行
    return 0;
}

// 获取一行输入，返回行的长度
int get_line(void){
    int c, i;
    extern char line[];  // 引用外部数组line

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;  // 将字符存入line数组
    }
    if (c == '\n') {  // 如果遇到换行符
        line[i] = c;  // 将换行符存入line数组
        ++i;  // 增加长度计数
    }
    line[i] = '\0';  // 在行末添加字符串结束符
    return i;  // 返回行的长度
}

// 复制当前行到最长行
void copy(void){
    int i;
    extern char line[], longest[];  // 引用外部数组line和longest

    for (i = 0; (longest[i] = line[i]) != '\0'; ++i) {  // 逐字符复制
        ;  // 空循环体
    }
}