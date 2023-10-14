#include<stdio.h>
int main(void){
    float x,y;
    x=y=0;
    scanf("%f",&x);
    if (x!=10){
        y=x;
    }else{
        y=1/x;
       
    }
    printf("f(%.1f) = %.1f\n", x, y);
    return 0;
}