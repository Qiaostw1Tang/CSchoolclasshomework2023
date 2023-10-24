#include<stdio.h>
int main(void){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=n;i>0;i--){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        printf("%d",a[i]);
        if(i<n){
            printf(" ");
        }}
    return 0;

}