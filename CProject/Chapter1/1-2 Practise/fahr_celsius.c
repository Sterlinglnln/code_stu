#include <stdio.h>

#define LOWER 0   // 最低温度
#define UPPER 300 // 最高温度
#define STEP 20  // 步长   

// 计算华氏温度与摄氏温度的对照表
// 公式：摄氏温度 = (5.0 / 9.0) * (华氏温度 - 32)
int main()
{
    int fahr;          // 华氏温度

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        // 打印华氏温度和对应的摄氏温度
        // 使用 %3d 格式化输出华氏温度，%6.1f 格式化输出摄氏温度   
        // 其中 %6.1f 表示总宽度为6，保留1位小数
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
