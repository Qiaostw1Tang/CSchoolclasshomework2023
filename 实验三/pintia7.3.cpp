#include<stdio.h>
int main(){
    int N,i,change;
    double sum=0.000;
    change = 1;
    scanf("%d",&N);
    for(i=1; i<=N; i++){
    sum = sum + change*1.000/(3*i-2);
    change = -change;}
    printf("sum = %.3lf", sum);
    return 0;
}