#include <stdio.h>
int main(void){
    int n,i;
    double sum=0,a=1.0,b=2.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum+=b/a;
    b=a+b;
    a=b-a;}
    printf("%.2f",sum);
    return 0;}