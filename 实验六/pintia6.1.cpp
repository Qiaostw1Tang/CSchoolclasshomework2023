#include <stdio.h>

void sum_diff( float op1, float op2, float *psum, float *pdiff );

int main()
{
    float a, b, sum, diff;

    scanf("%f %f", &a, &b);
    sum_diff(a, b, &sum, &diff);
    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
    
    return 0; 
}

/* 你的代码将被嵌在这里 */ 
void sum_diff( float op1, float op2, float *psum, float *pdiff )//定义一个指向float型变量的指针变量
{
    *psum = op1 + op2;
    *pdiff = op1 - op2;
}