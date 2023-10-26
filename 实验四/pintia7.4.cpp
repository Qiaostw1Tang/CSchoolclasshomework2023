#include <stdio.h>
int main()
{
	int n,i,j,x;
	scanf("%d",&n);
    int a[n+1];
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	scanf("%d",&x);
	for(i=0;i<n;i++){
         if(a[i]>x)
    break;}//找位置
	for (j=n-1;j>=i;j--){
		a[j+1]=a[j];
	}//移位置
	a[i]=x;//放入
	for(i=0;i<n+1;i++)
	{printf("%d ",a[i]);
    }return 0;
 } 