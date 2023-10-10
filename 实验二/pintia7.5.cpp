#include<stdio.h>
int main(void){
    int put,out,i;
    scanf("%d",&put);
    if (put<=2000||put>2100){
        printf("Invalid year!");
    }else if(put<2004&&put>2000){
        printf("None");
    }else{
        for(i=2001;i<=put;i++)
        if(i%4==0&&i%100!=0||i%400==0){
				printf("%d\n",i);

        }
    }

return 0;
}