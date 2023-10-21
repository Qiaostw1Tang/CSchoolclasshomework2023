#include <stdio.h>
int main(void){
    int N,i,j;
    int sum = 0;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    int sum1 = 1;
    for(j=1;j<=i;j++){
    sum1 = sum1*j; 
    }
    sum =sum + sum1;}
    printf("%d\n",sum);
    return 0;
}