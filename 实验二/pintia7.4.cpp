#include <stdio.h>
int main(void)
{
	int a,b;/*定义个变量*/
    char c; /*定义字符变量*/
    float price,discount,output; 
    a=b=price=discount=output=0;
	scanf("%d %d %c",&a,&b,&c);
    switch(b){
        
        case 90:
            price = 6.95;
            break;
        case 93:
            price = 7.44;
            break;
        case 97:
            price = 7.93;
            break;
        return 0;
    }
    switch(c) {
case 'm':
            discount = 0.05;
            break;
        case 'e':
            discount = 0.03;
            break;
            return 0;
    }
	output = a * price * (1 - discount);
    printf("%.2f\n",output);
	return 0;
}
