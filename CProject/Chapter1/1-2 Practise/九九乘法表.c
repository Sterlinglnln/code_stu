#include <stdio.h>

// 九九乘法表
int main(){
    int i, j;
    // 使用嵌套循环打印九九乘法表
    for (i = 1; i <= 9; i++){
        for (j = 1; j <= i; j++){
            printf("%d * %d = %2d ", j, i, i *j);
        }
        printf("\n");
    }
}