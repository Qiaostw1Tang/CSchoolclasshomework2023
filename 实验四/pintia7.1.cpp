#include<stdio.h>
int main(void)
{
    int N,X,i;
    scanf("%d %d",&N,&X);
    int a[N];
    for(i=0;i<N;i++)
    {
    scanf("%d ",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(X==a[i])
        {
            printf("%d",i);
            break;
        }
    }
        if(i==N)
        printf("Not Found");
    return 0;
}