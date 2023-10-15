#include <stdio.h>

int main()
{
    int N,i;
    double sum=0.0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    sum = sum + 1.0/(i+1);
    }
    printf("sum = %lf",sum);
}
