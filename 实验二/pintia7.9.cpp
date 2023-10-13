#include <stdio.h>
int main()
{
    float x,cost;
    scanf("%f",&x);
    if(x>=0){
    if(x>=0&&x<=50){
    cost=x*0.53;}else{
    cost=50*0.53+(x-50)*0.58;}
    printf("cost = %.2f\n",cost);
    }else{
    printf("Invalid Value!\n");}
    return 0;
}
