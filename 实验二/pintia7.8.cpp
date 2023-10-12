#include<stdio.h>
#include<math.h>
int main(void){
	float x;
	scanf("%f",&x);
	if(x>=0){
	printf("f(%.2f) = %.2f",x,pow(x,0.5));
	}else{
	printf("f(%.2f) = %.2f",x,(x+1)*(x+1)+2*x+1/x);
	}
    return 0;
} 