#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int sum(int m,int n){
    int total=0;
   while(m<=n){
        total+=m;
       	m++;
   }
    return total;
}