#include<stdio.h>
int main(void){
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
            	a[i]=a[j];
            	a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    	if(i==0)
    		printf("%d",a[i]);
		else printf(" %d",a[i]);
	}

}