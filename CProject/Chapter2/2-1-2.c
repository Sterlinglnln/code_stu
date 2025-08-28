#include <stdio.h>
#include <limits.h>
#include <float.h>

//通过直接计算确定signed和unsigned限定的char、short、int、long和long long类型变量的取值范围
int main() {
    signed char cMin = -((unsigned char)-1 / 2) - 1;
    signed char cMax = (unsigned char)-1 / 2;
    printf("char: %d to %d\n", cMin, cMax);
    printf("unsigned char: 0 to %d\n", (unsigned char)-1);
    
    signed short sMin = -((unsigned short)-1 / 2) - 1;
    signed short sMax = (unsigned short)-1 / 2;
    printf("short: %d to %d\n", sMin, sMax);
    printf("unsigned short: 0 to %d\n", (unsigned short)-1);
    
    signed int iMin = -((unsigned int)-1 / 2) - 1;
    signed int iMax = (unsigned int)-1 / 2;
    printf("int: %d to %d\n", iMin, iMax);
    printf("unsigned int: 0 to %u\n", (unsigned int)-1);
    
    signed long lMin = -((unsigned long)-1 / 2) - 1;
    signed long lMax = (unsigned long)-1 / 2;
    printf("long: %ld to %ld\n", lMin, lMax);
    printf("unsigned long: 0 to %lu\n", (unsigned long)-1);
    
    signed long long llMin = -((unsigned long long)-1 / 2) - 1;
    signed long long llMax = (unsigned long long)-1 / 2;
    printf("long long: %lld to %lld\n", llMin, llMax);
    printf("unsigned long long: 0 to %llu\n", (unsigned long long)-1);
}