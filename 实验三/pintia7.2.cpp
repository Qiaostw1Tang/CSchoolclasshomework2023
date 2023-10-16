#include<stdio.h>
int main(void)
{
    int i,n;
    double sum = 1;
    scanf("%d", &n);
    for(i=1; i<n; i++){
    sum = sum + 1.0 / (2*i+1);}
    printf("sum = %lf", sum);
    return 0;
}
