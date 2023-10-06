#include<stdio.h>
#include<math.h>
int main(void){
	float money,year,rate,interest;
	scanf("%If%If%If",&money,&year,&rate);
	interest=money*pow((1+rate),year)-money;
	printf("interest = %.2f\n",interest);
	return 0;
}
