#include<stdio.h>
int main(void){
	int M,N,i,g,h=0,sum=0;
	scanf("%d%d",&M,&N);
	for(i = M; i <= N; i++){
	for(g = 2; g <= i; g++){
	if(i % g == 0)
	break;}
	if(i == g){
	sum += i;
	h++;}
	}
	printf("%d %d",h,sum);
	return 0;
}