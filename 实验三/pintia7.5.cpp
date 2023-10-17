#include<stdio.h>
int main(void){
    int N,change;
    double i,sum=0.0;
    change = 1;
    scanf("%d",&N);
    for(i=1; i<=N; i++){
    sum = sum + change*(i/(2*i-1));
    change = -change;}
    printf("%0.3lf", sum);
    return 0;
}