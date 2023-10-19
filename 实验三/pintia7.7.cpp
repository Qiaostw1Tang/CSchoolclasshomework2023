#include<stdio.h>
int main(void){
    int min;
    int n;//输入n个数
    scanf("%d",&n);
    int num;
    scanf("%d",&num);//接收输入的数串。由于输入的数串的第一个已经被n接收了，所以num会接受第二个数
    min = num;//先把第一个当成最小的
    for(int x=1;x<=n-1;x++){//只循环n-1次
    scanf("%d",&num);
    if(min>num){
    min = num;}
    }
    printf("min = %d",min);
    return 0;
}