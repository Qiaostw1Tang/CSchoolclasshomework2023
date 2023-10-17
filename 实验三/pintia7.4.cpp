#include<stdio.h>
int main(void){
    int lower,upper,i;
    scanf("%d%d",&lower,&upper);
    if (lower<0||upper>100||upper<lower) {
    printf("Invalid.");
    }else {
    printf("fahr celsius\n");
    for (i=lower;i<=upper;i+=2) {
    printf("%d%6.1f\n",i,5.0*(i-32)/9);
    }
    }
    return 0;
}