#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int m=a[0];
    for(int j=1;j<n;j++)
    {
        if(m<a[j])
            m=a[j];
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]==m)
        {
            printf("%d %d",m,k);
            break;
        }
    }

    return 0;
}

