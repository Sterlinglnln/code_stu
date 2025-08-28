#include <stdio.h>
#include <limits.h>
#include <float.h>
 //采用打印标准头文件中的相应值来确定分别由signed及unsigned限定的char、short、int、long类型变量的取值范围
int main() {
    printf("char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %d\n", UCHAR_MAX);
    
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %d\n", USHRT_MAX);
    
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);
    
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: 0 to %llu\n", ULLONG_MAX);

    return 0;
}